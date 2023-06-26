/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 03:04:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/24 22:20:38 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

void	compare_vars(const Fixed fix, const Fixed fix2, std::string var, std::string var2)
{
	if (fix == fix2)
		std::cout << var << " is equal to " << var2 << "\n";
	else
		std::cout << var << " is not equal to " << var2 << "\n";
	if (fix < fix2)
		std::cout << var << " is smaller than " << var2 << "\n";
	else
		std::cout << var << " is not smaller than " << var2 << "\n";
	if (fix > fix2)
		std::cout << var << " is bigger than " << var2 << "\n";
	else
		std::cout << var << " is not bigger than " << var2 << "\n";
	
}

int main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( b );
	Fixed d( 5 );
	a = d;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a << " as a Float" << std::endl;
	std::cout << "a is " << ++a << " as a Float" << std::endl;
	std::cout << "a is " << a << " as a Float" << std::endl;
	std::cout << "a is " << a++ << " as a Float" << std::endl;
	std::cout << "a is " << a << " as a Float" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	a = a * d;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as a Float" << std::endl;
	a = a / d;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "a is " << a.toFloat() << " as a Float" << std::endl;
	compare_vars(b, d, "b", "d");
	d = d * 2;
	compare_vars(b, d, "b", "d");
	std::cout << "total is " << a + b + c + d << " as a Float" << std::endl;
}
