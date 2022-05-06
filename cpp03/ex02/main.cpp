/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:00:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/06 14:36:12 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap abc("ABC");
	ScavTrap def("DEF");
	FragTrap ghi("GHI");
	abc.attack("DEF");
	def.attack("untruc");
	def.guardGate();
	ghi.attack("something");
	ghi.highFivesGuys();
	return 0;
}