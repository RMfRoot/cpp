#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;

	std::cout << "Phonebook is starting up" << std::endl;
	while (1)
	{
		std::cout << "Phonebook> ";
		std::cin.clear();
		std::clearerr(stdin);
		if (!std::getline(std::cin, cmd) || cmd.empty())
		{ 
			std::cout << "\n";
			continue;
		}
		if (!cmd.compare("ADD") || !cmd.compare("add"))
			book.addContact();
		else if (!cmd.compare("SEARCH") || !cmd.compare("search"))
			book.printContacts();
		else if (!cmd.compare("EXIT") || !cmd.compare("exit"))
			exit(0);
		else
			std::cout << "You only have 3 commands to remember, but you still managed to fuck it up" << std::endl;
	}
}
