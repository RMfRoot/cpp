#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap Default constructor called\n";
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

void	ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "Copy operator called\n";
	_name = clapTrap._name;
	_hitPoint = clapTrap._hitPoint;
	_energyPoint = clapTrap._energyPoint;
	_attackDamage = clapTrap._attackDamage;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called\n";
	_name = clapTrap._name;
	_hitPoint = clapTrap._hitPoint;
	_energyPoint = clapTrap._energyPoint;
	_attackDamage = clapTrap._attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << _name << " Destructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_energyPoint)
		std::cout << "ClapTrap " << _name << " tries to attack, but is out of energy!\n";
	else if (!_hitPoint)
		std::cout << "ClapTrap " << _name << " is dead\n";
	else
	{
		std::cout << "ClapTrap " << _name << " attacks "
			<< target << ", causing " << _attackDamage << " points of damage!\n";
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << "\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount;
	if (_hitPoint <= 0)
	{
		_hitPoint = 0;
		std::cout << "ClapTrap " << _name << " died\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoint)
		std::cout << "ClapTrap " << _name
			<< " tries to repair itself, but is out of energy!\n";
	else if (!_hitPoint)
		std::cout << "ClapTrap " << _name << " is dead\n";
	else
	{
		std::cout << "ClapTrap " << _name << " repairs itself, gaining "
			<< amount << " hitpoints\n";
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << "\n";
		std::cout << "Current hitpoints: " << _hitPoint << "\n";
	}
}
