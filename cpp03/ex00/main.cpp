/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:00:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/05 09:49:47 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap abc("ABC");
	ClapTrap def;
	ClapTrap ghi(def);
	ClapTrap mno("QWERTY");
	mno = abc;
	abc.attack("untruc");
	def.attack("untruc");
	mno.attack("untruc");
	def.setName("DEF");
	def.attack("untruc");
	return 0;
}