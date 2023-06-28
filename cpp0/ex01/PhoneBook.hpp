#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <exception>
# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		int		contact_nbr;
		Contact	contacts[8];
	public:
		void	addContact();
		void	printContacts();
				PhoneBook();
				~PhoneBook();
	private:
		void	removeTop();
};

#endif