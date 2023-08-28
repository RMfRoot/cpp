#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotonyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	try{
		Bureaucrat pres("president", 1);
		Bureaucrat minister("minister", 7);
		Bureaucrat middleSalaryMan("middleSalaryMan", 150);
		AForm *form = new PresidentialPardonForm("caveman");
		pres.executeForm(*form);
		minister.signForm(*form);
		minister.executeForm(*form);
		pres.executeForm(*form);
		delete form;

		std::cout << std::endl;
		form = new ShrubberyCreationForm("test");
		middleSalaryMan.signForm(*form);
		minister.signForm(*form);
		middleSalaryMan.executeForm(*form);
		minister.executeForm(*form);
		delete form;

		std::cout << std::endl;
		form = new RobotonyRequestForm("test");
		middleSalaryMan.signForm(*form);
		minister.signForm(*form);
		middleSalaryMan.executeForm(*form);
		minister.executeForm(*form);
		delete form;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}