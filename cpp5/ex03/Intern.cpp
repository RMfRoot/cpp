#include "Intern.hpp"

Intern::Intern()
{
	formArr[0] = new PresidentialPardonForm();
	formArr[1] = new RobotonyRequestForm();
	formArr[2] = new ShrubberyCreationForm();
}

Intern::Intern(const Intern &intern) 
{
	(void)intern;
	formArr[0] = new PresidentialPardonForm();
	formArr[1] = new RobotonyRequestForm();
	formArr[2] = new ShrubberyCreationForm();
}

Intern	&Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Intern::~Intern()
{
	delete formArr[0];
	delete formArr[1];
	delete formArr[2];
}

const char	*Intern::FormNotFoundExecption::what() const throw() {return ("Form wasn't found");}

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	std::string	formNames[3] = {"presidential pardon", "robotony request", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (formArr[i]->clone(target));
		}
	}
	throw FormNotFoundExecption();
}