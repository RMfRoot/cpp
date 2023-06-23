/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:46:53 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/06 01:55:34 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
		HumanA();
	public:
		HumanA(std::string newName, Weapon &newWeapon);
		~HumanA();
		void	attack();
};

