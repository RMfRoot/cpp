
#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ms) : IMateriaSource()
{
	*this = ms;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &ms)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (ms._inventory[i])
			_inventory[i] = ms._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
		if (i == 3)
			std::cout << "cannot learn any more Materia" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (0);
}