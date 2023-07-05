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

Dog::Dog(const AAnimal &animal) : AAnimal("Dog")
{
	(void)animal;
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &dog) : AAnimal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*dog._brain);
}

Dog::Dog(const Cat &cat) : AAnimal("Dog")
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*cat.getBrain());
}

Dog	&Dog::operator=(const AAnimal &animal)
{
	(void)animal;
	return (*this);
}

Dog	&Dog::operator=(const Dog &dog)
{
	delete _brain;
	_brain = new Brain(*dog._brain);
	return (*this);
}

Dog	&Dog::operator=(const Cat &cat)
{
	delete _brain;
	_brain = new Brain(*cat.getBrain());
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
