/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:50:03 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 12:09:10 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form(void);
		Form(std::string name, int sign_grade, int exe_grade);
		Form(const Form& src);
		Form &operator=(const Form& rhs);
		virtual ~Form();
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Grade too High");}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Grade too Low");}
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Form not signed");}
		};
		
		virtual void	beSigned(Bureaucrat &bur);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		std::string getName() const;
		bool getIsSign() const;
		int	getSignGrade() const;
		int	getExeGrade() const;
		void setIsSign(bool sign);
		
	private:
		const std::string _name;
		bool _is_sign;
		int	_sign_grade;
		int	_exe_grade;
};

std::ostream & operator<<(std::ostream& o, const Form& rhs);



#endif
