/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 08:19:30 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/02 09:14:36 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string		getType(void);
		void	setType(std::string type);

	private:
		std::string _type; 
};

