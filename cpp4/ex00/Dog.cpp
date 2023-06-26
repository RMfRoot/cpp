#include "Polymorth.h"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}

Dog::Dog(const Animal &animal) : Animal("Dog")
{
	(void)animal;
	std::cout << "Dog copy constructor called\n";	
}

void	Dog::makeSound() const
{
	std::cout << "Waf\n";
}

Dog	&Dog::operator=(const Animal &animal)
{
	(void)animal;
	_type = "Dog";
	return (*this);
}
