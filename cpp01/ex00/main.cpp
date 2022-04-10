/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:25:20 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 10:11:42 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("JO");
	
	Zombie *bob;
	bob = newZombie("BOB");
	bob->announce();
	delete bob;

	// Zombie *mike;
	// mike = randomChump("MIKE");
	// mike->announce();

	//newZombie("ABC");
	return 0;
}