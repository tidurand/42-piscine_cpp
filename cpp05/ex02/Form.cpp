/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:49:16 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 10:48:44 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form(void): _name("form"), _is_sign(0), _sign_grade(150), _exe_grade(150)
{
}

Form::Form(std::string name, int sign_grade, int exe_grade): _name(name)
{
	_is_sign = 0;
	if (sign_grade < 1 || exe_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exe_grade > 150)
		throw GradeTooLowException();
	else
	{
		_sign_grade = sign_grade;
		_exe_grade = exe_grade;
	}	
}

Form::Form(const Form & src): _name(src._name), _is_sign(src._is_sign), _sign_grade(src._sign_grade), _exe_grade(src._exe_grade)
{
}

Form	&Form::operator=(const Form& rhs)
{
	_is_sign = rhs._is_sign;
	_sign_grade = rhs._sign_grade;
	_exe_grade = rhs._exe_grade;
	return (*this);
}

Form::~Form()
{
}

std::ostream & operator<<(std::ostream& o, const Form& rhs)
{
	o << "FORM name :" << rhs.getName() << ", is sign: " << rhs.getIsSign() << ", sign_grade: ";
	o << rhs.getSignGrade() << ", exe_grade: " << rhs.getExeGrade();
	return o;
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (_is_sign == 1)
		std::cout << "Form already signed" << std::endl;
	else if (bur.getGrade() <= _sign_grade)
		_is_sign = 1;
	else
		throw GradeTooLowException();
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (_is_sign == 0)
		throw NotSignedException();
	if (executor.getGrade() > _exe_grade)
		throw GradeTooLowException();
}