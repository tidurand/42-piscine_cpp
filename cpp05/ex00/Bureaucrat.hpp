/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:08:42 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 11:59:17 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
//# include ".hpp"

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat	&operator=(const Bureaucrat& rhs);
		~Bureaucrat();
		class GradeTooHighException
		{
			
		}
		class GradeTooLowException
		{
			
		}
		const std::string getName() const;
		int	getGrade() const;

	private:
		const std::string _name;
		int _grade;
};

std::ostream & operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
