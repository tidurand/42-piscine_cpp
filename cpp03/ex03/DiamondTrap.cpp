/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 05:13:11 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 15:53:19 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	_name = "A";
	_hitPoints = ScavTrap::_hitPoints;
	_energyPoints = 50;
	_attackDamage = 30;
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
	*this = src;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& rhs)
{
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	ClapTrap::_name = rhs._name + "_clap_name";
	return (*this);
}

DiamondTrap::~DiamondTrap()
{

}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond: " << _name << std::endl;
	std::cout << "ClapTrap: " << ClapTrap::_name << std::endl;
}