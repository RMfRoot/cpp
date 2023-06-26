#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Polymorth.h"

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &brain);
		~Brain();
		Brain	&operator=(const Brain &brain);
		void	newIdea(std::string idea);
		void	printIdeas();
};

#endif