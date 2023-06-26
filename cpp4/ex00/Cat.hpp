#include "Polymorth.h"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Animal &animal);
		~Cat();
		Cat	&operator=(const Animal &animal);
		virtual void	makeSound() const;
};
