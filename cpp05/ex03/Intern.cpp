/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:44:41 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 14:35:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{

}
Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern	&Intern::operator=(const & rhs)
{

	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::cout << "Intern creates" << name << ", target is " << target << std::endl;
	std::string str[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	void (Intern::*ptr[3])(void);
	int i = 0;
	
	ptr[0] = &Intern::s;
	ptr[1] = &Intern::r;
	ptr[2] = &Intern::p;
	while (i < 3 && level != str[i])
		i++;
	switch (i)
	{
	case 0:
		(this->*ptr[0])();
		break;
	case 1:
		(this->*ptr[1])();
		break;
	case 2:
		(this->*ptr[2])();
		break;
	default:
		std::cout << "Bad name" << std::endl;
		break;
	}
}

void	Intern::s(void)
{}