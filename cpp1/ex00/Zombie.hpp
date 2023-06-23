/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:18:23 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/05 22:27:02 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

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