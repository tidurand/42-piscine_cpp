/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:36 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 10:39:32 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137)
{
	_target = name;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): Form(src._target, 145, 137)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	_target = rhs._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::beSigned(Bureaucrat &bur)
{
	if (getIsSign() == 1)
		std::cout << "Form already signed" << std::endl;
	else if (bur.getGrade() <= getSignGrade())
		setIsSign(1);
	else
		throw GradeTooLowException();
}

void	ShrubberyCreationForm::create_tree(void)
{
	std::fstream	file;
	_target.append("_shrubbery");
	file.open(_target.c_str(), std::ios::out);
	if (!file.is_open())
		throw FailToCreate();

	file <<"               ,@@@@@@@, "<< std::endl;
	file <<"       ,,,.   ,@@@@@@/@@,  .oo8888o."<< std::endl;
	file <<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"<< std::endl;
	file <<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"<< std::endl;
	file <<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"<< std::endl;
	file <<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"<< std::endl;
	file <<"   `&%\\ ` /%&'    |.|        \\ '|8'"<< std::endl;
	file <<"       |o|        | |         | |"<< std::endl;
	file <<"       |.|        | |         | |"<< std::endl;
	file <<"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"<< std::endl;

	file.close();
}