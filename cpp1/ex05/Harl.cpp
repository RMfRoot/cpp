/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:50 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/07 21:48:15 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void	Harl::complain(std::string level)
{
	int i;
	std::string options[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_fcn		fcnCall[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (i = 0; i < 4; i++)
		if (options[i] == level)
			break ;
	if (i != 4)
		(this->*fcnCall[i])();
	
}

void	Harl::debug(void)
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
