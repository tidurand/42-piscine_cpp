/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:37:32 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 04:49:11 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

class Brain
{
	public:
		Brain(void);
		Brain (const Brain& src);
		~Brain();
		Brain &operator=(const Brain& rhs);

	private:
		std::string ideas[100];
};

#endif