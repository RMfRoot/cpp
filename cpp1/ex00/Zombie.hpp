/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:18:23 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/05 18:13:38 by egeorgel         ###   ########.fr       */
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
		Zombie* newZombie(std::string name);
		void	randomChump(std::string name);
};

#endif