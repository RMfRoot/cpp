#include "PhoneProgram.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;

	std::cout << "Phonebook is starting up\n";
	while (1)
	{
		std::cout << "Phonebook> ";
		std::cin >> cmd;
		if (!cmd.compare("ADD"))
			book.AddContact();
		else if (!cmd.compare("SEARCH"))
			book.PrintContacts();
		else if (!cmd.compare("EXIT"))
			exit(0);
		else
			std::cout << "You only have 3 commands to remember, but you still managed to fuck it up\n";
	}
}
