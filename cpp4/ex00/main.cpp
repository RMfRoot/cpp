#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	delete meta;
	delete i;
	delete j;

	const WrongAnimal *w = new WrongCat();
	std::cout << w->getType() << " " << std::endl;
	w->makeSound();
	delete w;

	Dog d;
	Dog *c = &d;
	Animal copy = *c;
	Animal *deepcopy = c;
	std::cout << copy.getType() << " " << std::endl;
	std::cout << deepcopy->getType() << " " << std::endl;
	copy.makeSound();
	deepcopy->makeSound();
	return 0;
}