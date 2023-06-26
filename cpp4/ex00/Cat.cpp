#include "Polymorth.h"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}

Cat::Cat(const Animal &animal) : Animal("Cat")
{
	(void)animal;
	std::cout << "Cat copy constructor called\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}

Cat	&Cat::operator=(const Animal &animal)
{
	(void)animal;
	_type = "Cat";
	return (*this);
}