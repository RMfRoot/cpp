#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) : _type(animal._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	_type = animal._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (_type);
}
