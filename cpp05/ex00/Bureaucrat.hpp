/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:08:42 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/10 12:23:26 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat	&operator=(const Bureaucrat& rhs);
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Grade too High");}
		};
		class GradeTooLowException
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Grade too Low");}
		};
		const std::string getName() const;
		void setName(std::string name);
		int	getGrade() const;
		void	setGrade(int grade);
		void	increaseGrade();
		void	decreaseGrade();

	private:
		const std::string _name;
		int _grade;
};

std::ostream & operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
