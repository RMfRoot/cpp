
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	Character me("me");
	ICharacter* Ime = &me;
	Ime->equip(src->createMateria("ice"));
	Ime->equip(src->createMateria("cure"));
	Ime->equip(src->createMateria("awdawdawdsda"));
	Ime->equip(src->createMateria("ice"));
	Ime->equip(src->createMateria("ice"));
	Ime->equip(src->createMateria("ice"));
	me.unequip(0);
	me.equip(src->createMateria("cure"));

	std::cout << std::endl;
	Character bob = me;
	ICharacter* Ibob = &bob;
	Ibob->unequip(0);
	Ibob->unequip(-1);
	Ibob->unequip(0);
	
	std::cout << std::endl;
	bob = me;
	Ime->use(0, *Ibob);
	Ime->use(-1, me);
	Ime->use(2, me);
	Ibob->unequip(0);
	Ibob->use(0, bob);
	delete src;
	return 0;
}