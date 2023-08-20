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
	std::cout << std::endl;
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << std::endl;
	const WrongAnimal *w = new WrongCat();
	std::cout << w->getType() << " " << std::endl;
	w->makeSound();

	std::cout << std::endl;
	Dog d;
	Animal copy = d;
	Animal *deepcopy = &d;
	std::cout << copy.getType() << " " << std::endl;
	std::cout << deepcopy->getType() << " " << std::endl;
	copy.makeSound();
	deepcopy->makeSound();

	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	delete w;
	return 0;
}