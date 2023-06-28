#include "Polymorth.h"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Animal &animal) : Animal("Cat")
{
	(void)animal;
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat	&Cat::operator=(const Animal &animal)
{
	(void)animal;
	_type = "Cat";
	return (*this);
}