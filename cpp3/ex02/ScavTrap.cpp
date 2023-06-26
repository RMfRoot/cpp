#include "ClapTrap.h"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor called\n";
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ClapTrap &clapTrap) : ClapTrap(clapTrap){}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor called\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (!_energyPoint)
		std::cout << "ScavTrap " << _name << " tries to attack, but is out of energy!\n";
	else if (!_hitPoint)
		std::cout << "ScavTrap " << _name << " is dead\n";
	else
	{
		std::cout << "ScavTrap " << _name << " attacks "
			<< target << ", causing " << _attackDamage << " points of damage!\n";
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << "\n";
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount;
	if (_hitPoint <= 0)
	{
		_hitPoint = 0;
		std::cout << "ScavTrap " << _name << " died\n";
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoint)
		std::cout << "ScavTrap " << _name
			<< " tries to repair itself, but is out of energy!\n";
	else if (!_hitPoint)
		std::cout << "ScavTrap " << _name << " is dead\n";
	else
	{
		std::cout << "ScavTrap " << _name << " repairs itself, gaining "
			<< amount << " hitpoints\n";
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << "\n";
		std::cout << "Current hitpoints: " << _hitPoint << "\n";
	}
}

void	ScavTrap::guardGuate()
{
	std::cout << "ScavTrap " << _name << " is now in guate keeper mode\n";
}
