#include "Polymorth.h"

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &wrongAnimal);
		~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);
		std::string	getType() const;
		void		makeSound() const;
};
