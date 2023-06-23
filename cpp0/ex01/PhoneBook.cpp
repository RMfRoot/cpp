#include "Phonebook.h"

PhoneBook::PhoneBook()
{
	contact_nbr = 0;
	for (int i = 0; i < 8; i++)
	{
		contacts[i].f_name = "";
		contacts[i].l_name = "";
		contacts[i].nickname = "";
	}
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::AddContact()
{
	if (contact_nbr == 8)
		RemoveTop();
	CreateContact();
	contact_nbr++;
}

void	PhoneBook::PrintContacts()
{
	if (!contact_nbr)
	{
		std::cout << "No contacts to display\n";
		return ;
	}
	std::cout << "_____________________________________________\n";
	std::cout << "|     Index|    F-Name|    L-Name|  Nickname|\n";
	std::cout << "_____________________________________________\n";
	for (int i = 0; i < contact_nbr; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		PrintVar(contacts[i].f_name);
		PrintVar(contacts[i].l_name);
		PrintVar(contacts[i].nickname);
		std::cout << "\n";
	}
	std::cout << "_____________________________________________\n";
	std::cout << "Index: ";
	std::string index;
	std::cin >> index;
	int i = 0;
	try{
		i = std::stoi(index, nullptr, 10) - 1;	
	}
	catch(const std::invalid_argument&){
		std::cout << "invalid index\n";
		return ;
	}
	if (i > contact_nbr - 1 || i < 0)
	{
		std::cout << "invalid index\n";
		return ;
	}
	std::cout << "first name: " << contacts[i].f_name << "\n";
	std::cout << "last name: " << contacts[i].l_name << "\n";
	std::cout << "nickname: " << contacts[i].nickname << "\n";
	std::cout << "phone number: " << contacts[i].phonenbr << "\n";
	std::cout << "darkest secret: " << contacts[i].secret << "\n";
}

void	PhoneBook::PrintVar(std::string str)
{
	int	str_size;

	str_size = str.size();
	for (int i = str_size; i < 10; i++)
		std::cout << " ";
	if (str_size > 10)
		str.replace(9, str_size, ".");
	std::cout << str;
	std::cout << "|";
}

void	PhoneBook::CreateContact()
{
	std::cout << "Input contact's first name: ";
	while (contacts[contact_nbr].f_name.empty())
		std::getline(std::cin, contacts[contact_nbr].f_name);
	std::cout << "Input contact's last name: ";
	while (contacts[contact_nbr].l_name.empty())
		std::getline(std::cin, contacts[contact_nbr].l_name);
	std::cout << "Input contact's nickname: ";
	while (contacts[contact_nbr].nickname.empty())
		std::getline(std::cin, contacts[contact_nbr].nickname);
	std::cout << "Input contact's phone number: ";
	while (contacts[contact_nbr].phonenbr.empty())
		std::getline(std::cin, contacts[contact_nbr].phonenbr);
	std::cout << "Input contact's darkest secret: ";
	while (contacts[contact_nbr].secret.empty())
		std::getline(std::cin, contacts[contact_nbr].secret);
}

void	PhoneBook::RemoveTop()
{
	for (int i = 0; i < contact_nbr - 1; i++)
	{
		contacts[i].f_name = contacts[i + 1].f_name;
		contacts[i].l_name = contacts[i + 1].l_name;
		contacts[i].nickname = contacts[i + 1].nickname;
		contacts[i].phonenbr = contacts[i + 1].phonenbr;
		contacts[i].secret = contacts[i + 1].secret;
	}
	if (contact_nbr > 0)
	{
		contacts[contact_nbr - 1].f_name = "";
		contacts[contact_nbr - 1].l_name = "";
		contacts[contact_nbr - 1].nickname = "";
		contacts[contact_nbr - 1].phonenbr = "";
		contacts[contact_nbr - 1].secret = "";
		contact_nbr = contact_nbr - 1;
	}
}