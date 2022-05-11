/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:18:58 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 13:10:25 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"
class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string name = "abc");
		PresidentialPardonForm(const PresidentialPardonForm& src);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm& rhs);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

#endif
