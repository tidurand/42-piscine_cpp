/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:36 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 15:25:42 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
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

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getIsSign() == 0)
		throw NotSignedException();
	if (executor.getGrade() > getExeGrade())
		throw GradeTooLowException();
	std::fstream	file;
	std::string filename =_target + "_shrubbery";
	file.open(filename.c_str(), std::ios::out);
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