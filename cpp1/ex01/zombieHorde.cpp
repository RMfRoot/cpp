/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:44:47 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/05 22:52:15 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie *zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].name = name;
	return (zombieHorde);
}