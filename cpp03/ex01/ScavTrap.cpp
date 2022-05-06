/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:40:58 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/06 13:40:48 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Hello I'm ScavTrap Default Consctructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
	std::cout << "Hello I'm ScavTrap Copy Consctructor" << std::endl;
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Hello I'm ScavTrap Str Consctructor" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Hello I'm ScavTrap Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "Equal" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
}


void	ScavTrap::guardGate()
{
	std::cout << "Gate keeper mode activated" << std::endl;
}