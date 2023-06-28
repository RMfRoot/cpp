#include "Polymorth.h"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Animal &animal) : Animal("Dog")
{
	(void)animal;
	std::cout << "Dog copy constructor called" << std::endl;	
}

void	Dog::makeSound() const
{
	std::cout << "Waf" << std::endl;
}

Dog	&Dog::operator=(const Animal &animal)
{
	(void)animal;
	_type = "Dog";
	return (*this);
}
