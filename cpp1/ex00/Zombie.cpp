/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:20:33 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/05 18:14:10 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
	name = "default";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " died." << std::endl;
}

void	Zombie::annonce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;
	newZombie->name = name;
	return (newZombie);
}

void	Zombie::randomChump(std::string name)
{
	Zombie random;
	random.name = name;
	random.annonce();
}