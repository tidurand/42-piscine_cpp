/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:04:15 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 17:21:52 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string new_name);
		~Zombie();
		void	announce(void) const;
		std::string		get_name(void) const;
		void	set_name(std::string name);

	private:
		std::string name;
};

	void randomChump( std::string name );
	Zombie* newZombie( std::string name );

#endif