#ifndef CAT_HPP
# define CAT_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"
# include "Dog.hpp"

class Dog;

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Animal &animal);
		Cat(const Dog &dog);
		Cat(const Cat &cat);
		~Cat();
		Cat	&operator=(const Animal &animal);
		Cat	&operator=(const Dog &dog);
		Cat	&operator=(const Cat &cat);
		Brain			*getBrain() const;
		void			newIdea(std::string idea);
		void			printIdeas();
		virtual void	makeSound() const;
};

#endif