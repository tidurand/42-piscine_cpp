/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:40 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 13:19:19 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5)
{
	_target = name;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src): Form(src._target, 25, 5)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	_target = rhs._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getIsSign() == 0)
		throw NotSignedException();
	if (executor.getGrade() > getExeGrade())
		throw GradeTooLowException();
	std::cout << _target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}