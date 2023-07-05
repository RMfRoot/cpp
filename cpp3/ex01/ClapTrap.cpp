#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap Default constructor called" << std::endl;
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "Copy operator called" << std::endl;
	_name = clapTrap._name;
	_hitPoint = clapTrap._hitPoint;
	_energyPoint = clapTrap._energyPoint;
	_attackDamage = clapTrap._attackDamage;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	_name = clapTrap._name;
	_hitPoint = clapTrap._hitPoint;
	_energyPoint = clapTrap._energyPoint;
	_attackDamage = clapTrap._attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << _name << " Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_energyPoint)
		std::cout << "ClapTrap " << _name << " tries to attack, but is out of energy!" << std::endl;
	else if (!_hitPoint)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks "
			<< target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount;
	if (_hitPoint <= 0)
	{
		_hitPoint = 0;
		std::cout << "ClapTrap " << _name << " died" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoint)
		std::cout << "ClapTrap " << _name
			<< " tries to repair itself, but is out of energy!" << std::endl;
	else if (!_hitPoint)
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " repairs itself, gaining "
			<< amount << " hitpoints" << std::endl;
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "Energy Left: " << _energyPoint << std::endl;
		std::cout << "Current hitpoints: " << _hitPoint << std::endl;
	}
}
