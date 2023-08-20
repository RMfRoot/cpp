#ifndef AMATERIAL_HPP
# define AMATERIAL_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual	~AMateria();
		AMateria(const AMateria &materia);
		AMateria			&operator=(const AMateria &materia);
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif