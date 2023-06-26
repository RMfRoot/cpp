#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "PhoneProgram.hpp"

class PhoneBook
{
	private:
		int		contact_nbr;
		Contact	contacts[8];
	public:
		void	AddContact();
		void	PrintContacts();
				PhoneBook();
				~PhoneBook();
	private:
		void	PrintVar(std::string str);
		void	RemoveTop();
		void	CreateContact();
};

#endif