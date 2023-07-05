#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Animal &animal);
		~Dog();
		Dog	&operator=(const Animal &animal);
		virtual void	makeSound() const;
};

#endif
