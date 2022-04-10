/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:26:28 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 10:18:39 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack(void);
		
	private:
		Weapon &weapon2;
		std::string _name;
};
#endif