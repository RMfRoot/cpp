/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:26 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/09 20:57:07 by egeorgel         ###   ########.fr       */
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
	void	operator=(const Fixed &fix);
	Fixed();
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
};
