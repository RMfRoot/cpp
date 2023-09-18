#include "BitcoinExchange.hpp"

BitcoinExchange::InvalidFormat::InvalidFormat(std::string str) : _exceptionValue("Format is invalid => " + str) {}

const char *BitcoinExchange::InvalidFormat::what() const throw() {return _exceptionValue.c_str();}

const char *BitcoinExchange::InvalidDate::what() const throw() {return "Date is invalid";}

const char *BitcoinExchange::NegativeNbr::what() const throw() {return "not a positive number.";}

const char *BitcoinExchange::BigNbr::what() const throw() {return "number is too big.";}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bit)
{
	_currencyValue = bit._currencyValue;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &bit)
{
	_currencyValue = bit._currencyValue;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

std::string	getFileContents(const std::string fileName)
{
	std::ifstream		file;
	file.exceptions(std::ifstream::failbit);
	file.open(fileName.c_str());
	std::ostringstream	fileStream;
	fileStream << file.rdbuf();
	file.close();
	std::string			fileContents = fileStream.str();
	return fileContents;
}

void	isInFuture(time_t time)
{
	time_t currentTime;
	std::time(&currentTime);
	if(difftime(currentTime, time) < 0)
		throw BitcoinExchange::InvalidDate();
}

tm	getTime(const std::string date)
{
	tm	time;
	time.tm_sec = 0;
	time.tm_min = 0;
	time.tm_hour = 0;
	strptime(date.c_str(), "%Y-%m-%dT", &time);
	int	day = std::strtol(date.substr(8, 2).c_str(), NULL, 10);
	int mon = std::strtol(date.substr(5, 2).c_str(), NULL, 10) - 1;
	int	year = std::strtol(date.substr(0, 4).c_str(), NULL, 10) - 1900;
	time.tm_isdst = 0;
	if (-1 == mktime(&time) || day != time.tm_mday || mon != time.tm_mon || year != time.tm_year)
		throw BitcoinExchange::InvalidDate();
	isInFuture(mktime(&time));
	return time;
}

bool	operator<=(const tm &t1, const tm &t2)
{
	std::tm	t1cp = t1;
	std::time_t time1 = std::mktime(&t1cp);
	std::tm	t2cp = t2;
	std::time_t time2 = std::mktime(&t2cp);
	if (time1 == -1 || time2 == -1)
		throw BitcoinExchange::InvalidDate();
	if (std::difftime(time2, time1) >= 0)
		return true;
	return false;
}

float	getNearestValue(std::map<tm, float> &currValue, const tm &time)
{
	std::pair<tm, float>	buff;

	for (std::map<tm, float>::iterator it = currValue.begin(); it != currValue.end() && it->first <= time; it++)
		buff = *it;
	return buff.second;
}

void	checkFormat(const std::string fileContents, std::map<tm, float> &currValue)
{
	std::stringstream ss(fileContents);
	for (std::string line = ""; std::getline(ss, line, '\n');)
	{
		try{
			if (!std::regex_match(line, std::regex("\\d{4}\\-\\d{2}\\-\\d{2} \\| \\-?\\d+\\.?\\d*")))
				throw BitcoinExchange::InvalidFormat(line);
			float i = (float)std::strtod(line.substr(13, line.size()).c_str(), NULL);
			if (i < 0)
				throw BitcoinExchange::NegativeNbr();
			if (i > 1000)
				throw BitcoinExchange::BigNbr();
			tm	time = getTime(line.substr(0, 10));
			std::cout << line.substr(0, 10) << " => " << line.substr(13, line.size()) << " = " << i * getNearestValue(currValue, time) << std::endl;
		}
		catch(const std::exception &e){
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}

void	getDBValues(const std::string dBContents, std::map<tm, float> &currValue)
{
	std::stringstream ss(dBContents);
	for (std::string line = ""; std::getline(ss, line, '\n');)
	{
		try{
			if (std::regex_match(line, std::regex("\\d{4}\\-\\d{2}\\-\\d{2}\\,\\d+\\.?\\d*")))
			{
				currValue[getTime(line.substr(0, 10))] = (float)std::strtod(line.substr(11, line.size()).c_str(), NULL);
			}
		}
		catch(std::exception &e) {}
	}
}

BitcoinExchange::BitcoinExchange(const std::string fileName)
{
	std::string fileContents = getFileContents(fileName);
	std::string	dBContents = getFileContents("data.csv");
	getDBValues(dBContents, _currencyValue);
	checkFormat(fileContents, _currencyValue);
}

bool	operator<(const tm &t1, const tm &t2)
{
	std::tm	t1cp = t1;
	std::time_t time1 = std::mktime(&t1cp);
	std::tm	t2cp = t2;
	std::time_t time2 = std::mktime(&t2cp);
	if (time1 == -1 || time2 == -1)
		throw BitcoinExchange::InvalidDate();
	if (std::difftime(time2, time1) > 0)
		return true;
	return false;
}