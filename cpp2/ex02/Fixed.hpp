/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:26 by egeorgel          #+#    #+#             */
/*   Updated: 2023/08/11 15:35:44 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <exception>
# include <cmath>

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
	static Fixed	&min(Fixed &fix1, Fixed &fix2);
	static const Fixed	&min(const Fixed &fix1, const Fixed &fix2);
	static Fixed	&max(Fixed &fix1, Fixed &fix2);
	static const Fixed	&max(const Fixed &fix1, const Fixed &fix2);
	Fixed();
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	int		toInt() const;
	float	toFloat() const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fix);

#endif
