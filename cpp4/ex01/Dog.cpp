#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &dog) : Animal(dog._type)
{
	std::cout << "Dog copy constructor called" << std::endl;	
	_brain = new Brain(*dog._brain);
}

Dog	&Dog::operator=(const Dog &dog)
{
	_type = dog._type;
	_brain = new Brain(*dog._brain);
	return (*this);
}

void	Dog::newIdea(std::string idea)
{
	_brain->newIdea(idea);
}

void	Dog::printIdeas()
{
	_brain->printIdeas();
}

Brain *Dog::getBrain() const
{
	return (_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Waf" << std::endl;
}
