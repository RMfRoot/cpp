#include "ClapTrap.h"

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
