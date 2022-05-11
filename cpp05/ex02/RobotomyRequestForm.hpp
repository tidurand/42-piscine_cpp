/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:55 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 13:07:04 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <ctime>
#include <cstdlib>
# include "Form.hpp"
class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string name = "abc");
		RobotomyRequestForm(const RobotomyRequestForm& src);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();
		
		void	execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

#endif
