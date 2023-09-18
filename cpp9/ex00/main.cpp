#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try{
		if (argc == 2)
			BitcoinExchange bit(argv[1]);
	}
	catch (std::exception &e){
		std::cout << "Error: could not open file." << std::endl;
	}
}