/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:08:49 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/10 12:25:18 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Epsilon"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	try
	{
		if (grade >= 1 && grade <= 150)
			_grade = grade;
		else if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooHighException & e)
	{
		_grade = 0;
		std::cerr << e.what() << std::endl;
	}
	catch (GradeTooLowException & e)
	{
		_grade = 0;
		std::cerr << e.what() << std::endl;
	}
}
Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& rhs)
{
	_grade = rhs._grade;
	setName(rhs._name);
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

void	Bureaucrat::setName(std::string name)
{
	_name = name;
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