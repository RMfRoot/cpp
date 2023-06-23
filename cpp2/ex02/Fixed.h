/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 02:55:30 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/23 22:47:32 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <string>
# include <exception>
# include <cmath>
# include "Fixed.hpp"

std::ostream	&operator<<(std::ostream &out, const Fixed &fix);
#endif