#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <string>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
		IMateriaSource() {};
		IMateriaSource(const IMateriaSource &m) {(void)m;};
		IMateriaSource &operator=(const IMateriaSource &m) {(void)m; return (*this);};
		virtual ~IMateriaSource() {};
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif