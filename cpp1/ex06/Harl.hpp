/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:29:26 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/02 02:22:35 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <exception>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain(std::string level);
		Harl();
		~Harl();
};
