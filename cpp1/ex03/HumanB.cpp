/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:46:53 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/06 02:08:05 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string newName)
{
	this->weapon = NULL;
	name = newName;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " attacks with their " << "fists" << "\n";
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}