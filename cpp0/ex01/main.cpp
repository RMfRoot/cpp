/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 04:16:46 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/20 22:10:30 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

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
