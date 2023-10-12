#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	try{
		PmergeMe::sort(argc, argv);
	}
	catch (std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
	}
}