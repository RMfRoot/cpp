#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::addContact()
{
	if (contact_nbr == 8)
		removeTop();
	contacts[contact_nbr].createContact();
	contact_nbr++;
}

static bool	getInput(std::string &str)
{
	if (!std::getline(std::cin, str) || str.empty())
	{
		str.clear();
		std::cin.clear();
		std::clearerr(stdin);
		std::cout << "\n";
		return (false);
	}
	return (true);
}

void	PhoneBook::printContacts()
{
	if (!contact_nbr)
	{
		std::cout << "No contacts to display" << std::endl;
		return ;
	}
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     Index|    F-Name|    L-Name|  Nickname|" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	for (int i = 0; i < contact_nbr; i++)
		contacts[i].printVars(i + 1);
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "Index: ";
	std::string index;
	int i = 0;
	try{
		if (getInput(index))
			throw (std::invalid_argument(""));
		i = std::stoi(index, nullptr, 10) - 1;
		if (i > contact_nbr - 1 || i < 0)
			throw (std::invalid_argument(""));
	}
	catch(const std::invalid_argument&){
		std::cout << "invalid index" << std::endl;
		return ;
	}
	contacts[i].printInfo();
}

void	PhoneBook::removeTop()
{
	for (int i = 0; i < contact_nbr - 1; i++)
		contacts[i] = contacts[i + 1];
}