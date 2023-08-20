#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Cat copy;
	if(true)
	{
		Cat c;
		std::cout << std::endl;
		c.newIdea("ougabouga");
		c.printIdeas();
		copy.printIdeas();
		copy = c;
	}
	copy.printIdeas();
	//checking for deepcopy
	std::cout << copy.getType() << " " << std::endl;
	copy.makeSound();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	
	std::cout << std::endl;
	delete j;
	delete i;
	return 0;
}