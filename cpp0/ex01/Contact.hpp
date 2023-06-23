/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 02:06:47 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/20 22:09:38 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

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
