#ifndef RPN_HPP
# define RPN_HPP
# include <stack>
# include <string>
# include <iostream>

class RPN
{
	private:
		std::stack<int> stack;
	public:
		class InvalidInput : public std::exception {const char *what() const throw();};
		class InvalidSpacing : public std::exception {const char *what() const throw();};
		class InvalidOperation : public std::exception {const char *what() const throw();};
		class Division0 : public std::exception {const char *what() const throw();};
		RPN();
		RPN(std::string str);
		RPN(const RPN &cp);
		RPN	&operator=(const RPN &cp);
		~RPN();
};

#endif