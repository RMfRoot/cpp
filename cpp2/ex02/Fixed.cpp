/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:50 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/27 02:14:37 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_nbr = 0;
}

Fixed	&Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_nbr = fix.getRawBits();
}

Fixed	Fixed::operator*(const Fixed &fix) const
{
	Fixed res;
	res.setRawBits((_nbr * fix.getRawBits()) >> _fractional_bits);
	return (res);
}

Fixed	Fixed::operator+(const Fixed &fix) const
{
	Fixed res;
	res.setRawBits(_nbr + fix.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &fix) const
{
	Fixed res;
	res.setRawBits(_nbr - fix.getRawBits());
	return (res);
}

Fixed	Fixed::operator/(const Fixed &fix) const
{
	Fixed res;
	res.setRawBits((_nbr / fix.getRawBits()) << _fractional_bits);
	return (res);
}

Fixed	&Fixed::operator++()
{
	_nbr += 1;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	_nbr -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int i)
{
	(void)i;
	Fixed	fix;
	fix.setRawBits(_nbr);
	_nbr += 1;
	return (fix);
}

Fixed	Fixed::operator++(int i)
{
	(void)i;
	Fixed	fix;
	fix.setRawBits(_nbr);
	_nbr += 1;
	return (fix);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

bool	Fixed::operator==(const Fixed &fix) const
{
	if (fix.getRawBits() == _nbr)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &fix) const
{
	if (fix.getRawBits() != _nbr)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &fix) const
{
	if (fix.getRawBits() < _nbr)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &fix) const
{
	if (fix.getRawBits() > _nbr)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &fix) const
{
	if (fix.getRawBits() <= _nbr)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &fix) const
{
	if (fix.getRawBits() >= _nbr)
		return (true);
	return (false);
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	_nbr = fix.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nbr) : _nbr(nbr << _fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) : _nbr(nbr * (1 << _fractional_bits))
{
	std::cout << "Float constructor called" << std::endl;
}

int	Fixed::toInt() const
{
	return (std::roundf(_nbr >> _fractional_bits));
}

float	Fixed::toFloat() const
{
	return ((float)_nbr / (1 << _fractional_bits));
}

int Fixed::getRawBits() const
{
	return (_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	_nbr = raw;
}
