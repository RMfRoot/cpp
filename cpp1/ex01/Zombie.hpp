/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:18:23 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/05 18:15:09 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <new>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(/* args */);
		~Zombie();
		void	annonce(void);
		Zombie* zombieHorde(int N, std::string name);
};

#endif