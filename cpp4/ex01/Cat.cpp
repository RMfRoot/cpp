#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &cat) : Animal(cat._type)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*cat._brain);
}

Cat	&Cat::operator=(const Cat &cat)
{
	_type = cat._type;
	_brain = new Brain(*cat._brain);
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

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}