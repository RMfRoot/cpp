#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "PhoneProgram.hpp"

class Contact
{
	public:
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	phonenbr;
		std::string	secret;
		Contact(/* args */);
		~Contact();
};

#endif