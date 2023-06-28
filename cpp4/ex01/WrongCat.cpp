#include "Polymorth.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongAnimal &wrongAnimal) : WrongAnimal("WrongCat")
{
	(void)wrongAnimal;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongAnimal &wrongAnimal)
{
	(void)wrongAnimal;
	_type = "WrongCat";
	return (*this);
}