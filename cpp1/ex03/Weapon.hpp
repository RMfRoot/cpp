/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:39:02 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/06 01:28:36 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon(std::string newType);
	~Weapon();
	const std::string	&getType();
	void				setType(std::string newType);
};
