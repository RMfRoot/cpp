#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) : _type("something")
{
	(void)animal;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	(void)animal;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (_type);
}
