#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data data;
	data.blabla = "du putain de blabla";

	uintptr_t	ptr = Serializer::serialize(&data);
	Data *res = Serializer::deserialize(ptr);

	std::cout << data.blabla << std::endl;
	std::cout << res->blabla << std::endl;

	ptr = Serializer::serialize(NULL);
	res = Serializer::deserialize(ptr);

	std::cout << data.blabla << std::endl;
	std::cout << res << std::endl;
	//res->blabla will segfault because res and ptr are NULL
}