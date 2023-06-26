#include "Polymorth.h"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called\n";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete _brain;
}

Cat::Cat(const Animal &animal) : Animal("Cat")
{
	(void)animal;
	std::cout << "Cat copy constructor called\n";
	_brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal("Cat")
{
	std::cout << "Cat copy constructor called\n";
	_brain = new Brain(*cat._brain);
}

Cat::Cat(const Dog &dog) : Animal("Cat")
{
	std::cout << "Cat copy constructor called\n";
	_brain = new Brain(*dog.getBrain());
}

Cat	&Cat::operator=(const Animal &animal)
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
	std::cout << "Meow\n";
}