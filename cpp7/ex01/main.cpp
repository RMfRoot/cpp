#include "iter.hpp"

int	main(void)
{
	int	arr[5] = {0, 1, 2, 3, 4};
	iter(arr, 5, add<int>);
	iter(arr, 5, printAndReturn<int>);
	std::string const str[5] = {"test", "1", "2", "1", "2"};
	iter(str, 5, printAndReturn<std::string>);
}