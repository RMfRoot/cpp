#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <string>
# include <map>
# include <ctime>
# include <fstream>
# include <sstream>
# include <regex>
# include <iostream>

class BitcoinExchange
{
	private:
		std::map<tm, float>	_currencyValue;
	public:
		class InvalidFormat : public std::exception
		{
			private:
				std::string _exceptionValue;
			public:
				InvalidFormat(std::string str);
				const char *what() const throw();
		};
		class InvalidDate : public std::exception {const char *what() const throw();};
		class NegativeNbr : public std::exception {const char *what() const throw();};
		class BigNbr : public std::exception {const char *what() const throw();};
		BitcoinExchange();
		BitcoinExchange(const std::string filename);
		BitcoinExchange(const BitcoinExchange &bit);
		BitcoinExchange &operator=(const BitcoinExchange &bit);
		~BitcoinExchange();
};

bool	operator<(const tm &t1, const tm &t2);

#endif