#ifndef DOG_HPP
# define DOG_HPP
# include "Polymorth.h"


class Dog : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const AAnimal &animal);
		Dog(const Cat &cat);
		Dog(const Dog &dog);
		~Dog();
		Dog	&operator=(const AAnimal &animal);
		Dog	&operator=(const Cat &cat);
		Dog	&operator=(const Dog &dog);
		virtual void	makeSound() const;
		Brain		 	*getBrain() const;
		void			printIdeas();
		void			newIdea(std::string idea);
};

#endif