#include "Animal.hpp"

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal() : _type("something")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &animal) : _type(animal._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	_type = animal._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "You start hearing unintelligible and chimerics sounds echoing at the horizon...." << std::endl;
}
