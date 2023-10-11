#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try{
		Form("e", 151, 5);
		std::cout << "This wont be printed as an exception occured" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Form("e", 5, -123);
		std::cout << "This wont be printed as an exception occured" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	try{
		Form f("message", 5, 1);
		Bureaucrat b("soldier", 50);
		std::cout << f << std::endl << b << std::endl;
		b.signForm(f);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	try{
		Form f("message", 5, 1);
		Bureaucrat b("general", 1);
		std::cout << f << std::endl << b << std::endl;
		b.signForm(f);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}