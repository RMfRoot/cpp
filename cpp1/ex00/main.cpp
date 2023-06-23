/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:06:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/05 22:34:12 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie *z2;
	Zombie z1;
	z1.annonce();
	z2 = z1.newZombie("malloc");
	z2->annonce();
	delete z2;
	z1.randomChump("E");
}