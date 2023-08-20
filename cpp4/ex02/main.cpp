#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Dog copy;
	if(true)
	{
		Cat c;
		c.newIdea("ougabouga");
		c.printIdeas();
		copy.printIdeas();
		copy = c;
	}
	copy = *i;
	copy.printIdeas();
	//checking for deepcopy

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << copy.getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	copy.makeSound();
	delete j;
	delete i;
	//system("leaks Poly");
	return 0;
}