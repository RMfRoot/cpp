#include "Array.hpp"
#include <iostream>

int	main()
{
	Array< Array<int> > nul(1);
	try{
		nul[0] = Array<int>(1);
		nul[0][0] = 213123;
		std::cout << nul[0][0] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "out of range" << std::endl;
	}

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

	const Array<int> consttest(2);
	//consttest[0] = 3123;
	std::cout << consttest[0] << std::endl;
}