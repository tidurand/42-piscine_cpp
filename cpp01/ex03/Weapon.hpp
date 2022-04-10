/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:19:30 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 17:19:31 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string		&getType(void) const;
		void	setType(std::string type);

	private:
		std::string _type; 
};

#endif