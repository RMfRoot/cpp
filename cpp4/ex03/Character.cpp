
#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

Character::Character(const Character &character) : ICharacter()
{
	*this = character;
}

Character	&Character::operator=(const Character &character)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (character._inventory[i])
			_inventory[i] = character._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_name = character._name;
	return (*this);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
		if (i == 3)
			std::cout << "inventory is full" << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		delete _inventory[idx];
	else
		std::cout << "invalid unequip" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "invalid equip" << std::endl;
}

std::string const	&Character::getName() const
{
	return (_name);
}