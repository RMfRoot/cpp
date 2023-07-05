#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		using WrongAnimal::operator=;
		WrongCat();
		WrongCat(const WrongAnimal &wrongAnimal);
		~WrongCat();
		WrongCat	&operator=(const WrongAnimal &wrongAnimal);
		void	makeSound() const;
};

#endif