/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:46:53 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/06 02:05:44 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string newName);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &newWeapon);
};

