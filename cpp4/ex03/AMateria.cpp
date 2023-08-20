
#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "unkown";
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria	&AMateria::operator=(const AMateria &materia)
{
	_type = materia._type;
	return (*this);
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
}

AMateria::~AMateria() {}

std::string const	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* unidentified magic was used on " << target.getName()  << " *" << std::endl;
}
