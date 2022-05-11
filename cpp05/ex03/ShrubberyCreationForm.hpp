/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:51 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 15:26:24 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include <string>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target = "abc");
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& rhs);
		~ShrubberyCreationForm();
		class FailToCreate : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Fail to create file");}
		};
		void	execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
	
};

#endif
