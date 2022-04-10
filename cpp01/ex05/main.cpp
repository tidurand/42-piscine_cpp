/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:25:10 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 09:16:38 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	void (Harl::*ptr)(std::string level);

	ptr = &Harl::complain;

	(harl.*ptr)("debug");
	(harl.*ptr)("info");
	(harl.*ptr)("warning");
	(harl.*ptr)("error");
	(harl.*ptr)("nothing");

	return 0;
}