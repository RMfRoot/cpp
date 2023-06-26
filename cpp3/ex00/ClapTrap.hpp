#include "ClapTrap.h"

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
	public:
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &clapTrap);
		~ClapTrap();
		void	operator=(const ClapTrap &clapTrap);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};
