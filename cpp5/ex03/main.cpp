#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotonyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	try{
		Intern	i;
		Bureaucrat	b("Joseph", 1);
		b.signForm(*i.makeForm("aiwudbawd", "Jess"));
		std::cout << "This wont print as an execption occured" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Intern	i;
		Bureaucrat	b("Joseph", 1);
		AForm *form = i.makeForm("presidential pardon", "Jess");
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
		std::cout << std::endl;

		form = i.makeForm("robotony request", "Jess");
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
		std::cout << std::endl;

		form = i.makeForm("shrubbery creation", "Jess");
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
		std::cout << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}