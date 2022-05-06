/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:00:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/05 10:00:42 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap abc("ABC");
	ScavTrap def("DEF");
	abc.attack("DEF");
	def.attack("untruc");
	def.guardGate();
	return 0;
}