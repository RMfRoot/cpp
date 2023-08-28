#include "Bureaucrat.hpp"

int	main()
{
	try{
		Bureaucrat b("e", -2);
		std::cout << "This wont be printed as an exception occured" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat b("e", 151);
		std::cout << "This wont be printed as an exception occured" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat b("e", 1);
		b.gradeUp();
		std::cout << "This wont be printed as an exception occured" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Bureaucrat b("e", 150);
		b.gradeDown();
		std::cout << "This wont be printed as an exception occured" << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	try{
		Bureaucrat b("first", 1);
		Bureaucrat c("second", 150);
		c = b;
		c.gradeDown();
		std::cout << b << std::endl << c << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}