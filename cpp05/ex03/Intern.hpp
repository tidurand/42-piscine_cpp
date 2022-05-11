/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:44:35 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 15:36:51 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class	Intern
{
	public:
		Intern(void);
		Intern(const Intern& src);
		Intern	&operator=(const Intern& rhs);
		~Intern();
		class BadName : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Bad name");}
		};
		Form *makeForm(std::string name, std::string target);
	private:
	
};

#endif
