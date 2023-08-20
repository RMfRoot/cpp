
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure()
{
}

Cure::Cure(const Cure &cure) : AMateria(cure._type) {}

Cure	&Cure::operator=(const Cure &cure)
{
	_type = cure._type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}