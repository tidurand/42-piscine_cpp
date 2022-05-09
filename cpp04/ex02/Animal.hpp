/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:31 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 17:02:04 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal (const Animal& src);
		virtual ~Animal();
		Animal &operator=(const Animal& rhs);
		virtual void makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string type;
};

#endif