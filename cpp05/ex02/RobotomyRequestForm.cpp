/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 08:18:46 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
{
	*this = src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
