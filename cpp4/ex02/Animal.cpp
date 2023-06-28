#include "Polymorth.h"

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) : _type("something")
{
	(void)animal;
	std::cout << "Animal copy constructor called" << std::endl;
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
