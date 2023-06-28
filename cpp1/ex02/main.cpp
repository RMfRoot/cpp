/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:06:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/27 02:13:39 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str1 = &str;
	std::string &str2 = str;

	std::cout << &str << std::endl;
	std::cout << str1 << std::endl;
	std::cout << &str2 << std::endl;
	
	std::cout << str << std::endl;
	std::cout << *str1 << std::endl;
	std::cout << str2 << std::endl;
}