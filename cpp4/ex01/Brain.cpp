#include "Polymorth.h"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100 && !brain._ideas[i].empty(); i++)
		_ideas[i] = brain._ideas[i];
}

Brain	&Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < 100 && !brain._ideas[i].empty(); i++)
		_ideas[i] = brain._ideas[i];
	return (*this);
}

void	Brain::newIdea(std::string idea)
{
	int i;
	for (i = 0; i < 100 && !_ideas[i].empty(); i++)
		;
	_ideas[i] = idea;
}

void	Brain::printIdeas()
{
	int i;
	for (i = 0; i < 100 && !_ideas[i].empty(); i++)
		std::cout << _ideas[i] << std::endl;
	if (i == 0)
		std::cout << "this brain seems rather empty" << std::endl;
}
