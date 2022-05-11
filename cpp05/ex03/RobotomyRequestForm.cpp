/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:45 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 15:34:33 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): Form("RobotomyRequestForm", 72, 45)
{
	(void)src;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	_target = rhs._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getIsSign() == 0)
		throw NotSignedException();
	if (executor.getGrade() > getExeGrade())
		throw GradeTooLowException();
	std::cout << "BRRRRRRRRRRR (try do to drill sound)" << std::endl;
	srand(time(0));
	if (rand()%2 == 1)
		std::cout << _target << " robotomized" << std::endl;
	else
		std::cout << "operation failed" << std::endl;
}