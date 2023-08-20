#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ms);
		MateriaSource	&operator=(const MateriaSource &ms);
		~MateriaSource();
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};



#endif