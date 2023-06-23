/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:50 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/20 23:25:14 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"


Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_nbr = 0;
}

void	Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called\n";
	_nbr = fix.getRawBits();
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called\n";
	_nbr = fix.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits called\n";
	return (_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	_nbr = raw;
}