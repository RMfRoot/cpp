#include "Polymorth.h"

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
