/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:27:47 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/06 08:42:15 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{

}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << _weapon->getType() << std::endl;
}