
#include "Bureaucrat.hpp"

void	checkGrade(int &grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighExecption();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowExecption();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	checkGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name), _grade(b._grade)
{
	checkGrade(_grade);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	_grade = b._grade;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return out;
}

Bureaucrat::~Bureaucrat() {}

const char	*Bureaucrat::GradeTooHighExecption::what() const throw() {return ("Grade too high");}

const char	*Bureaucrat::GradeTooLowExecption::what() const throw() {return ("Grade too low");}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::gradeUp()
{
	_grade--;
	checkGrade(_grade);
}

void	Bureaucrat::gradeDown()
{
	_grade++;
	checkGrade(_grade);
}

void	Bureaucrat::signForm(Form &f)
{
	try{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << _name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}