#include "ClapTrap.h"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor called\n";
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const ClapTrap &clapTrap) : ClapTrap(clapTrap){}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor called\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (!_energyPoint)
		std::cout << "FragTrap " << _name << " tries to attack, but is out of energy!\n";
	else if (!_hitPoint)
		std::cout << "FragTrap " << _name << " is dead\n";
	else
	{
		std::cout << "FragTrap " << _name << " attacks "
			<< target << ", causing " << _attackDamage << " points of damage!\n";
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << "\n";
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount;
	if (_hitPoint <= 0)
	{
		_hitPoint = 0;
		std::cout << "FragTrap " << _name << " died\n";
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoint)
		std::cout << "FragTrap " << _name
			<< " tries to repair itself, but is out of energy!\n";
	else if (!_hitPoint)
		std::cout << "FragTrap " << _name << " is dead\n";
	else
	{
		std::cout << "FragTrap " << _name << " repairs itself, gaining "
			<< amount << " hitpoints\n";
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << "\n";
		std::cout << "Current hitpoints: " << _hitPoint << "\n";
	}
}

void	FragTrap::highFive()
{
	std::cout << "High Five!\n";
}
