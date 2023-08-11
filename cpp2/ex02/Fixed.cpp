/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:50 by egeorgel          #+#    #+#             */
/*   Updated: 2023/08/11 15:45:22 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_nbr = 0;
}

Fixed	&Fixed::operator=(const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_nbr = fix.getRawBits();
	return (*this);
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
	if (_nbr == fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &fix) const
{
	if (_nbr != fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &fix) const
{
	if (_nbr < fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &fix) const
{
	if (_nbr > fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &fix) const
{
	if (_nbr <= fix.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &fix) const
{
	if (_nbr >= fix.getRawBits())
		return (true);
	return (false);
}


Fixed	&Fixed::min(Fixed &fix1, Fixed &fix2)
{
	if (fix1 < fix2)
		return (fix1);
	return (fix2);
}

const Fixed	&Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 < fix2)
		return (fix1);
	return (fix2);
}

Fixed	&Fixed::max(Fixed &fix1, Fixed &fix2)
{
	if (fix1 > fix2)
		return (fix1);
	return (fix2);
}

const Fixed	&Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 > fix2)
		return (fix1);
	return (fix2);
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
	return (roundf(_nbr >> _fractional_bits));
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
