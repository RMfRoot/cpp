#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		AMateria	**_created;
		int			_createSize;
		void		newCreation(AMateria *m);
	public:
		Character(std::string name);
		Character(const Character &character);
		Character	&operator=(const Character &character);
		~Character();
		std::string const	&getName() const;
		void		equip(AMateria *m);
		void		unequip(int idx);
		void		use(int idx, ICharacter &target);
};

#endif