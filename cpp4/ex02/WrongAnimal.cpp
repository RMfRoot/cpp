#include "Polymorth.h"

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal() : _type("something")
{
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : _type("something")
{
	(void)wrongAnimal;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	(void)wrongAnimal;
	_type = "something";
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "You start hearing unintelligible and chimerics sounds echoing at the horizon....\n";
}
