/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:01:29 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/06 12:15:22 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap (const ClapTrap& src);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap& rhs);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getHitPoints(void);
		int getEnergyPoints(void);
		int getAttackDamage(void);
		void setHitPoints(int nb);
		void setEnergyPoints(int nb);
		void setAttackDamage(int nb);
		void setName(std::string name);
	
	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;		
};



#endif