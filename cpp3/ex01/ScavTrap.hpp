
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		using	ClapTrap::operator=;
		ScavTrap(const std::string name);
		ScavTrap(const ClapTrap &clapTrap);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGuate();
};

#endif
