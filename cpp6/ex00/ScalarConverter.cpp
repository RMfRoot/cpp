#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &sC) {(void)sC;}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &sC) {(void)sC; return *this;}

ScalarConverter::~ScalarConverter() {}

char	convertChar(std::string unit)
{
	long	value;
	char	*end;
	value = std::strtol(unit.c_str(), &end, 0);
	if (errno == ERANGE || value > INT_MAX || value < INT_MIN || *end)
	{
		errno = 0;
		if (unit.size() == 1 && unit[0] > 32 && unit[0] < 126)
			return unit[0];
		throw std::exception();
	}
	else if (value > 32 && value < 126)
		return value;
	throw std::exception();
}

int	convertInt(std::string unit)
{
	long	value;
	char	*end;
	value = std::strtol(unit.c_str(), &end, 0);
	if (errno == ERANGE || value > INT_MAX || value < INT_MIN || *end)
	{
		errno = 0;
		throw std::exception();
	}
	return value;
}

double	convertDouble(std::string unit)
{
	float	value;
	char	*end;
	value = std::strtod(unit.c_str(), &end);
	if (errno == ERANGE || *end)
	{
		errno = 0;
		throw std::exception();
	}
	return (value);
}

void	printChar(char value)
{
	std::cout << "char: " << value << std::endl;
}

void	printInt(int value)
{
	std::cout << "int: " << value << std::endl;
}

void	printFloat(float value)
{
	if (value >= 1000000 || value <= -1000000 || std::fmod(value, 1) != 0)
		std::cout << "float: " << value << "f" << std::endl;
	else
		std::cout << "float: " << value << ".0f" << std::endl;
}

void	printDouble(double value)
{
	if (value >= 1000000 || value <= -1000000 || std::fmod(value, 1) != 0)
		std::cout << "double: " << value << std::endl;
	else
		std::cout << "double: " << value << ".0" << std::endl;
}

template <typename T> void	convertValues(T value)
{
	if (value >= 32 && value <= 126)
		printChar(static_cast<char>(value));
	else if (value < INT_MAX && value > INT_MIN)
		std::cout << "char: Non printable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;

	if (value < INT_MAX && value > INT_MIN)
		printInt(static_cast<int>(value));
	else
		std::cout << "int: impossible" << std::endl;
	printFloat(static_cast<float>(value));
	printDouble(static_cast<double>(value));
}

void	printImpossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
	exit(0);
}

void	findType(std::string &unit)
{
	char	cValue;
	int		iValue;
	double	dValue;
	try
	{
		cValue = convertChar(unit);
		convertValues(cValue);
	}
	catch (std::exception &e)
	{
		try
		{
			iValue = convertInt(unit);
			convertValues(iValue);
		}
		catch (std::exception &e)
		{
			try
			{
				dValue = convertDouble(unit);
				convertValues(dValue);
			}
			catch (std::exception &e)
			{
				printImpossible();
			}
		}
	}

}

bool	pseudoLiteral(std::string &unit)
{
	if (unit == "nan" || unit == "inf" || unit == "-inf" ||  unit == "+inf")
		return true;
	else if (unit == "nanf" ||  unit == "inff" || unit == "-inff" || unit == "+inff")
	{
		unit.erase(unit.size() - 1, 1);
		return true;
	}
	return false;
}

void	rmFloatSpecifier(std::string &unit)
{
	bool fullNum = true;
	for (long unsigned int i = 0; i < unit.size(); i++)
		if (((unit[i] != '.' && i + 1 != unit.size()) && !isdigit(unit[i])) && (i != 0 || (unit[i] != '-' && unit[i] != '+')) && (i != unit.size() - 1 || unit[i] != 'f'))
			fullNum = false;
	if (unit.size() >= 2 && !fullNum && !pseudoLiteral(unit))
		printImpossible();
	else if (fullNum && unit[unit.size() - 1] == 'f' && unit.size() >= 2)
		unit.erase(unit.size() - 1, 1);
}

void	ScalarConverter::convert(std::string unit)
{
	if (!unit[0])
		printImpossible();
	rmFloatSpecifier(unit);
	findType(unit);
}