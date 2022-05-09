/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:00:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 15:52:38 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap abc("ABC");

	std::cout << abc.getAttackDamage() << std::endl;
	std::cout << abc.getEnergyPoints() << std::endl;
	std::cout << abc.getHitPoints() << std::endl;
	abc.attack("DEF");
	abc.whoAmI();
	return 0;
}