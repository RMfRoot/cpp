/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:20:33 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/05 18:15:32 by egeorgel         ###   ########.fr       */
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

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].name = name;
	return (zombieHorde);
}