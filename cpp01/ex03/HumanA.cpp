/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:27:47 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/06 07:43:57 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon2(weapon), _name(name)
{

}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << weapon2.getType() << std::endl;
}