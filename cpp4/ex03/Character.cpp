
#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_created = NULL;
	_createSize = 1;
	newCreation(NULL);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; _created && _created[i]; i++)
		delete _created[i];
	delete[] _created;
}

Character::Character(const Character &character) : ICharacter()
{
	_name = "NULL";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_created = NULL;
	_createSize = 1;
	newCreation(NULL);
	*this = character;
}

Character	&Character::operator=(const Character &character)
{
	for (int i = 0; i < 4; i++)
		if (_inventory && _inventory[i])
			delete _inventory[i];
	for (int i = 0; _created && _created[i]; i++)
		delete _created[i];
	delete[] _created;
	_created = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (character._inventory[i])
			_inventory[i] = character._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	_createSize = character._createSize - 1;
	newCreation(NULL);
	for (int i = 0; character._created[i]; i++)
		newCreation(character._created[i]->clone());
	_name = character._name;
	return (*this);
}

void	Character::newCreation(AMateria *m)
{
	AMateria	**newArr = new AMateria*[++_createSize];
	int	i;
	for (i = 0; _created && _created[i]; i++)
		newArr[i] = _created[i];
	newArr[i++] = m;
	newArr[i] = NULL;
	delete[] _created;
	_created = newArr;
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
		{
			delete m;
			std::cout << "inventory is full" << std::endl;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		{
			newCreation(_inventory[idx]);
			_inventory[idx] = NULL;
		}
	else
		std::cout << "invalid unequip" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "invalid index" << std::endl;
}

std::string const	&Character::getName() const
{
	return (_name);
}