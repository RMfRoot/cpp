#include "Polymorth.h"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Animal &animal);
		~Dog();
		Dog	&operator=(const Animal &animal);
		virtual void	makeSound() const;
};
