#include "Polymorth.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}

WrongCat::WrongCat(const WrongAnimal &wrongAnimal) : WrongAnimal("WrongCat")
{
	(void)wrongAnimal;
	std::cout << "WrongCat copy constructor called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow\n";
}

WrongCat	&WrongCat::operator=(const WrongAnimal &wrongAnimal)
{
	(void)wrongAnimal;
	_type = "WrongCat";
	return (*this);
}