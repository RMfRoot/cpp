#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"
# include "Cat.hpp"

class Cat;

class Dog : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();
		Dog	&operator=(const Dog &dog);
		virtual void	makeSound() const;
		void			printIdeas();
		void			newIdea(std::string idea);
};

#endif