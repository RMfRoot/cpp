#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	private:

	public:
		using	ClapTrap::operator=;
		ScavTrap(const std::string name);
		ScavTrap(const ClapTrap &clapTrap);
		~ScavTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGuate();
};
