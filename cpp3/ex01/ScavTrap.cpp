#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ClapTrap &clapTrap) : ClapTrap(clapTrap){}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_energyPoint)
		std::cout << "ScavTrap " << _name << " tries to attack, but is out of energy!" << std::endl;
	else if (!_hitPoint)
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks "
			<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << std::endl;
	}
}

void	ScavTrap::guardGuate()
{
	std::cout << "ScavTrap " << _name << " is now in guate keeper mode" << std::endl;
}
