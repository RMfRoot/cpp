/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:20:33 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/05 22:43:42 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(/* args */)
{
	name = "default";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " died.\n";
}

void	Zombie::annonce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}