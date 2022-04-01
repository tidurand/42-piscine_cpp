/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:04:15 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/01 11:04:44 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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