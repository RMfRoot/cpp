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
		WrongCat(const WrongCat &wrongCat);
		~WrongCat();
		WrongCat	&operator=(const WrongCat &wrongCat);
		void	makeSound() const;
};

#endif
