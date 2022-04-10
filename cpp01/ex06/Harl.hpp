/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:24:49 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 08:56:49 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl();
		void	complain(std::string level);
		
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif