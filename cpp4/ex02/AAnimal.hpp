#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal(std::string type);
		AAnimal(const AAnimal &animal);
		virtual	~AAnimal();
		AAnimal	&operator=(const AAnimal &animal);
		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif