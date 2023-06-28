#include "ClapTrap.h"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const ClapTrap &clapTrap) : ClapTrap(clapTrap){}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!_energyPoint)
		std::cout << "FragTrap " << _name << " tries to attack, but is out of energy!" << std::endl;
	else if (!_hitPoint)
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " attacks "
			<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount;
	if (_hitPoint <= 0)
	{
		_hitPoint = 0;
		std::cout << "FragTrap " << _name << " died" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoint)
		std::cout << "FragTrap " << _name
			<< " tries to repair itself, but is out of energy!" << std::endl;
	else if (!_hitPoint)
		std::cout << "FragTrap " << _name << " is dead" << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " repairs itself, gaining "
			<< amount << " hitpoints" << std::endl;
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << std::endl;
		std::cout << "Current hitpoints: " << _hitPoint << std::endl;
	}
}

void	FragTrap::highFive()
{
	std::cout << "High Five!" << std::endl;
}
