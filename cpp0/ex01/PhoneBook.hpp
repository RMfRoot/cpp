/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 02:02:35 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/20 22:11:30 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

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
