/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:25:20 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/01 10:08:48 by tidurand         ###   ########.fr       */
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
	// mike = randomChump("BOB");
	// mike->announce();
	// mike->~Zombie();
	return 0;
}