#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cmath>
# include <climits>
# include <cerrno>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &sC);
		ScalarConverter	&operator=(const ScalarConverter &sC);
		~ScalarConverter();
	public:
		static void	convert(std::string unit);
};


#endif