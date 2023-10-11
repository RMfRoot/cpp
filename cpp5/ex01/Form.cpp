#include "Form.hpp"

void	checkGrade(const int &grade)
{
	if (grade < 1)
		throw Form::GradeTooHighExecption();
	else if (grade > 150)
		throw Form::GradeTooLowExecption();
}

const char	*Form::GradeTooHighExecption::what() const throw() {return ("Grade too high");}

const char	*Form::GradeTooLowExecption::what() const throw() {return ("Grade too low");}

Form::Form(std::string name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	_signed = false;
	checkGrade(_signGrade);
	checkGrade(_executeGrade);
}

Form::Form(const Form &f) : _name(f._name), _signGrade(f._signGrade), _executeGrade(f._executeGrade)
{
	_signed = f._signed;
}

Form	&Form::operator=(const Form &f)
{
	_signed = f._signed;
	return *this;
}

Form::~Form() {}

std::string	Form::getName() const {return (_name);}

bool	Form::isSigned() const {return (_signed);}

int	Form::getSignGrade() const {return (_signGrade);}

int	Form::getExecuteGrade() const {return (_executeGrade);}

void	Form::beSigned(const Bureaucrat &b)
{
	if (_signGrade >= b.getGrade())
		_signed = true;
	else
		throw GradeTooLowExecption();
}

std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	if (f.isSigned())
		out << "signed form named: " << f.getName() << ", sign grade: " << f.getSignGrade() <<", execute grade: " << f.getExecuteGrade() << ".";
	else
		out << "unsigned form named: " << f.getName() << ", sign grade: " << f.getSignGrade() <<", execute grade: " << f.getExecuteGrade() << ".";
	return out;
}