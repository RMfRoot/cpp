#ifndef CAT_HPP
# define CAT_HPP
# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"
# include "Dog.hpp"

class Dog;

class Cat : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();
		Cat	&operator=(const Cat &cat);
		Brain			*getBrain() const;
		void			newIdea(std::string idea);
		void			printIdeas();
		virtual void	makeSound() const;
};

#endif