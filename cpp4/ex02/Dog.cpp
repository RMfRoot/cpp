#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &dog) : AAnimal(dog._type)
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

void	Dog::makeSound() const
{
	std::cout << "Waf" << std::endl;
}
