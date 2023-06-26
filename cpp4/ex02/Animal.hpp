#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include "Polymorth.h"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(std::string type);
		Animal(const Animal &animal);
		virtual	~Animal();
		Animal	&operator=(const Animal &animal);
		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif