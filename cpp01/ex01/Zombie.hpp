/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:04:15 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 10:13:41 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie();
		void	announce(void) const;
		std::string		get_name(void) const;
		void	set_name(std::string name);

	private:
		std::string name;
};

	Zombie* zombieHorde(int N, std::string name);

#endif