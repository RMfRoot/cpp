#include "Form.hpp"

void	checkGrade(const int &grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighExecption();
	else if (grade > 150)
		throw AForm::GradeTooLowExecption();
}

const char	*AForm::GradeTooHighExecption::what() const throw() {return ("Grade too high");}

const char	*AForm::GradeTooLowExecption::what() const throw() {return ("Grade too low");}

AForm::AForm(std::string name, int signGrade, int executeGrade) : _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	_signed = false;
	checkGrade(_signGrade);
	checkGrade(_executeGrade);
}

AForm::AForm(const AForm &f) : _name(f._name), _signGrade(f._signGrade), _executeGrade(f._executeGrade)
{
	_signed = f._signed;
}

AForm	&AForm::operator=(const AForm &f)
{
	_signed = f._signed;
	return *this;
}

AForm::~AForm() {}

std::string	AForm::getName() const {return (_name);}

bool	AForm::isSigned() const {return (_signed);}

int	AForm::getSignGrade() const {return (_signGrade);}

int	AForm::getExecuteGrade() const {return (_executeGrade);}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (_signGrade >= b.getGrade())
		_signed = true;
	else
		throw GradeTooLowExecption();
}

std::ostream	&operator<<(std::ostream &out, const AForm &f)
{
	if (f.isSigned())
		out << "signed form named: " << f.getName() << ", sign grade: " << f.getSignGrade() <<", execute grade: " << f.getExecuteGrade() << ".";
	else
		out << "unsigned form named: " << f.getName() << ", sign grade: " << f.getSignGrade() <<", execute grade: " << f.getExecuteGrade() << ".";
	return out;
}