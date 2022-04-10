/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:25:17 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 09:43:28 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	std::string str[4] = {"debug", "info", "warning", "error"};
	void (Harl::*ptr[4])(void);
	int i = 0;
	
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
	while (i < 4 && level != str[i])
		i++;
	if (i != 4)
		(this->*ptr[i])();
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}