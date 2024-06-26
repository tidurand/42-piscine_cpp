/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:08:49 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/10 13:41:24 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Epsilon"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade >= 1 && grade <= 150)
		_grade = grade;
	else if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat& src): _name(src._name), _grade(src._grade)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& rhs)
{
	_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream & operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade >= 1 && grade <= 150)
			_grade = grade;
	else if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}
void	Bureaucrat::increaseGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}
void	Bureaucrat::decreaseGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}