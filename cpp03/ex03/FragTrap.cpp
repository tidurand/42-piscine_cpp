/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:29:56 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 06:33:43 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Hello I'm FragTrap Default Consctructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src)
{
	std::cout << "Hello I'm FragTrap Copy Consctructor" << std::endl;
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Hello I'm FragTrap Str Consctructor" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Hello I'm FragTrap Destructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "Equal" << std::endl;
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (_hitPoints < 1)
	{
		std::cout << "IL EST MORT (sorry)" << std::endl;
		return ;
	}
	if (_energyPoints < 1)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "FragTrap " << _name << " attack " << target;
	std::cout << ", causing " << _attackDamage << " points of damage !" << std::endl;
	std::cout << "Il reste " << _energyPoints << " points d'energie !" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "High Fives !" << std::endl;
}