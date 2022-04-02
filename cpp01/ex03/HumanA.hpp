/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:26:28 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/02 09:14:29 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void attack(void);
		Weapon weapon2;
		
	private:
		std::string _name;
};

