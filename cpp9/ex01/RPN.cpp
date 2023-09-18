#include "RPN.hpp"

const char	*RPN::InvalidInput::what() const throw() {return "Invalid input";};

const char	*RPN::InvalidSpacing::what() const throw() {return "Invalid spacing";};

const char	*RPN::InvalidOperation::what() const throw() {return "Invalid operation";};

const char	*RPN::Division0::what() const throw() {return "Cannot divide by 0";};

RPN::RPN() {}

bool	isOperator(const char c)
{
	if (std::string("+-*/").find(c) != std::string::npos)
		return true;
	return false;
}

void	inputCheck(const char c, std::stack<int> &stack)
{
	if (!isdigit(c) && !isOperator(c))
	{
		if (c == ' ')
			throw RPN::InvalidSpacing();
		else
			throw RPN::InvalidInput();
	}
	else if (isOperator(c) && stack.size() < 2)
		throw RPN::InvalidOperation();
}

int	doOperation(int nbr1, int nbr2, char operation)
{
	if (operation == '+')
		return nbr1 + nbr2;
	if (operation == '-')
		return nbr1 - nbr2;
	if (operation == '*')
		return nbr1 * nbr2;
	if (operation == '/' && nbr2 == 0)
		throw RPN::Division0();
	if (operation == '/')
		return nbr1 / nbr2;
	return 0;
}

void	getOperation(std::stack<int> &stack, char operation)
{
	int	nbr2 = stack.top();
	stack.pop();
	int	nbr1 = stack.top();
	stack.pop();
	stack.push(doOperation(nbr1, nbr2, operation));
}

void	revPolishNotation(std::string str, std::stack<int> &stack)
{
	for(size_t i = 0; i < str.size(); i++)
	{
		inputCheck(str[i], stack);
		if (isOperator(str[i]))
			getOperation(stack, str[i]);
		else
			stack.push(str[i] - '0');
		if (++i < str.size() && str[i] != ' ')
			throw RPN::InvalidInput();
	}
	if (stack.size() != 1)
		throw RPN::InvalidOperation();
	std::cout << stack.top() << std::endl;
	stack.pop();
}

RPN::RPN(std::string str)
{
	revPolishNotation(str, stack);
}

RPN::RPN(const RPN &cp) {(void)cp;}

RPN	&RPN::operator=(const RPN &cp) {(void)cp; return *this;}

RPN::~RPN() {}