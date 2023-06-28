#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iomanip>
# include <iostream>

class Contact
{
	private:
		std::string	_fName;
		std::string	_lName;
		std::string	_nickname;
		std::string	_phonenbr;
		std::string	_secret;
	public:
		Contact();
		~Contact();
		void	printVars(int index);
		void	createContact();
		void	printInfo();
		void	operator=(const Contact &contact);
};

#endif