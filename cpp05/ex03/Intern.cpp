/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:44:41 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 15:47:06 by tidurand         ###   ########.fr       */
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

Intern	&Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::cout << "Intern creates " << name << ", target is " << target << std::endl;
	std::string str[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int i = 0;
	
	while (i < 3 && name != str[i])
		i++;
	switch (i)
	{
	case 0:
		return new ShrubberyCreationForm(target);
	case 1:
		return new RobotomyRequestForm(target);
	case 2:
		return new PresidentialPardonForm(target);
	default:
		throw BadName();
	}
	return NULL;
}
