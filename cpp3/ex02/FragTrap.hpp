#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:

	public:
		using	ClapTrap::operator=;
		FragTrap(const std::string name);
		FragTrap(const ClapTrap &clapTrap);
		~FragTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFive();
};

#endif
