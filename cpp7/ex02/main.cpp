#include "Array.hpp"
#include <iostream>

int	main()
{
	Array< Array<int> > nul;
	Array<int>	nbrs(5);
	std::cout << nbrs[2] << std::endl;

	for (unsigned int i = 0; i < nbrs.size(); i++)
		nbrs[i] = i;
	for (unsigned int i = 0; i < nbrs.size(); i++)
		std::cout << nbrs[i] << " ";
	std::cout << std::endl;

	try {
		nbrs[5];
	}
	catch (std::exception &e) {
		std::cout << "out of range" << std::endl;
	}

	nbrs = Array<int>();
	Array<std::string> strs(2);
	strs[1] = "str2";

	std::cout << strs[0] << "(unitilized string), " << strs[1] << std::endl;

	try {
		strs[123];
	}
	catch (std::exception &e) {
		std::cout << "out of range" << std::endl;
	}
}