/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:44:35 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 14:13:12 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
class	Intern
{
	public:
		Intern(void);
		Intern(const Intern& src);
		Intern	&operator=(const Intern& rhs);
		~Intern();

		Form *makeForm(std::string name, std::string target);
	private:
	
};

#endif
