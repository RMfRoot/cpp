# include "easyfind.hpp"
#include <iostream>
# include <list>

int main(void)
{
	try{
		std::list<int> list(1, 1);
		list.push_back(2);
		list.push_back(5);

		std::list<int>::iterator it = easyfind(list, 5);
		std::cout << *it << std::endl;
		it = easyfind(list, 1);
		std::cout << *it << std::endl;
		it = easyfind(list, 2);
		std::cout << *it << std::endl;
		it = easyfind(list, 6);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
}