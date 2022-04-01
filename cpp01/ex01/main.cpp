/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:25:20 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/01 11:05:46 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *abcd;
	int nb = 4;
	abcd = zombieHorde(nb, "ABCD");
	for (int i = 0; i < nb ; i++)
        abcd[i].announce();
	delete [] abcd;
	return 0;
}