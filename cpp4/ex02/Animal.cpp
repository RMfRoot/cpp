#include "Polymorth.h"

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}

Animal::Animal(const Animal &animal) : _type("something")
{
	(void)animal;
	std::cout << "Animal copy constructor called\n";
}

Animal	&Animal::operator=(const Animal &animal)
{
	(void)animal;
	return (*this);
}

std::string	Animal::getType() const
{
	return (_type);
}
