/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:26 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/05 18:12:39 by egeorgel         ###   ########.fr       */
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
	Fixed();
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	int		toInt() const;
	float	toFloat() const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fix);

#endif
