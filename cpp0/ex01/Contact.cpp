# include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void	Contact::operator=(const Contact &contact)
{
	_fName = contact._fName;
	_lName = contact._lName;
	_nickname = contact._nickname;
	_phonenbr = contact._phonenbr;
	_secret = contact._secret;
}

static void	printVar(std::string str)
{
	if (str.size() > 10)
		str.replace(9, -1, ".");
	std::cout << std::setw(10);
	std::cout << str;
	std::cout << "|";
}

void	Contact::printVars(int index)
{
	std::cout << "|";
	printVar(std::to_string(index));
	printVar(_fName);
	printVar(_lName);
	printVar(_nickname);
	std::cout << std::endl;
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

void	Contact::createContact()
{
	while (_fName.empty())
	{
		std::cout << "Input contact's first name: ";
		if (!getInput(_fName))
			continue;
	}
	while (_lName.empty())
	{
		std::cout << "Input contact's last name: ";
		if (!getInput(_lName))
			continue;
	}
	while (_nickname.empty())
	{
		std::cout << "Input contact's nickname: ";
		if (!getInput(_nickname))
			continue;
	}
	while (_phonenbr.empty())
	{
		std::cout << "Input contact's phone number: ";
		if (!getInput(_phonenbr))
			continue;
	}
	while (_secret.empty())
	{
		std::cout << "Input contact's darkest secret: ";
		if (!getInput(_secret))
			continue;
	}
}

void	Contact::printInfo()
{
	std::cout << "first name: " << _fName << std::endl;
	std::cout << "last name: " << _lName << std::endl;
	std::cout << "nickname: " << _nickname << std::endl;
	std::cout << "phone number: " << _phonenbr << std::endl;
	std::cout << "darkest secret: " << _secret << std::endl;
}