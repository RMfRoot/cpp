/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 03:04:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/05 18:37:06 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	std::string str;
	Harl Harl;

	if (argv[1])
		str.assign(argv[1]);	
	Harl.complain(str);
	if (argc)
		return (0);
}