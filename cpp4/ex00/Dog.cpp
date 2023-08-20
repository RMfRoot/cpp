#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog._type)
{
	std::cout << "Dog copy constructor called" << std::endl;	
}

Dog	&Dog::operator=(const Dog &dog)
{
	_type = dog._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Waf" << std::endl;
}

