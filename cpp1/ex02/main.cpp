/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:06:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/06 00:34:23 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str1 = &str;
	std::string &str2 = str;

	std::cout << &str << "\n";
	std::cout << str1 << "\n";
	std::cout << &str2 << "\n";
	
	std::cout << str << "\n";
	std::cout << *str1 << "\n";
	std::cout << str2 << "\n";
}