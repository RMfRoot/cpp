#include "RPN.hpp"

int main(int argc, char **argv)
{
	try{
		if (argc == 2)
			RPN(std::string(argv[1]));
		else
			throw RPN::InvalidInput();
	}
	catch(std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
	}
}