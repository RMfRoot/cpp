/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:26 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/25 01:44:05 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

class Fixed
{
private:
	int					_nbr;
	static const int	_fractional_bits = 8;
public:
	Fixed(const Fixed &fix);
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed	&operator=(const Fixed &fix);
	bool	operator==(const Fixed &fix) const;
	bool	operator!=(const Fixed &fix) const;
	bool	operator<(const Fixed &fix) const;
	bool	operator>(const Fixed &fix) const;
	bool	operator<=(const Fixed &fix) const;
	bool	operator>=(const Fixed &fix) const;
	Fixed	operator+(const Fixed &fix) const;
	Fixed	operator*(const Fixed &fix) const;
	Fixed	operator-(const Fixed &fix) const;
	Fixed	operator/(const Fixed &fix) const;
	Fixed	&operator--();
	Fixed	&operator++();
	Fixed	operator--(int i);
	Fixed	operator++(int i);
	Fixed();
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	int		toInt() const;
	float	toFloat() const;
};
