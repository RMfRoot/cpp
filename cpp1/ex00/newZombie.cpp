/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:25:39 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/05 22:24:23 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;
	newZombie->name = name;
	return (newZombie);
}