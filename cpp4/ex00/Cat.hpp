#ifndef CAT_HPP
# define CAT_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Animal &animal);
		~Cat();
		Cat	&operator=(const Animal &animal);
		virtual void	makeSound() const;
};

#endif
