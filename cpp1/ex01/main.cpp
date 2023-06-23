/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:06:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/05 22:52:58 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie *z2;
	Zombie z1;
	z1.annonce();
	z2 = z1.zombieHorde(7, "E");
	for (int i = 0; i < 7; i++)
		z2[i].annonce();
	delete[] z2;
}