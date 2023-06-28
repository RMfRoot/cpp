#include "Polymorth.h"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const AAnimal &animal) : AAnimal("Cat")
{
	(void)animal;
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &cat) : AAnimal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*cat._brain);
}

Cat::Cat(const Dog &dog) : AAnimal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*dog.getBrain());
}

Cat	&Cat::operator=(const AAnimal &animal)
{
	(void)animal;
	return (*this);
}

Cat	&Cat::operator=(const Cat &cat)
{
	//delete _brain;
	_brain = new Brain(*cat._brain);
	return (*this);
}

Cat	&Cat::operator=(const Dog &dog)
{
	//delete _brain;
	_brain = new Brain(*dog.getBrain());
	return (*this);
}

void	Cat::newIdea(std::string idea)
{
	_brain->newIdea(idea);
}

void	Cat::printIdeas()
{
	_brain->printIdeas();
}

Brain	*Cat::getBrain() const
{
	return (_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}