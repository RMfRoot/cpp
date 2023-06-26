#include "Polymorth.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
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