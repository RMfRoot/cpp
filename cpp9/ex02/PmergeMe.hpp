#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <ctime>
# include <exception>
# include <iostream>
# include <string>
# include <climits>
# include <list>
# include <vector>
# include <algorithm>
# include <cerrno>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &cp);
		PmergeMe	&operator=(const PmergeMe &cp);
		~PmergeMe();
		static void	sort(int argc, char **argv);
		class InvalidArgument : public std::exception {const char *what() const throw();};
		class NoArgument : public std::exception {const char *what() const throw();};
		class Overflow : public std::exception {const char *what() const throw();};
		class NegativeNbr : public std::exception {const char *what() const throw();};
};

#endif