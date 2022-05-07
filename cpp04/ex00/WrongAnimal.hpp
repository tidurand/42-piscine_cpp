/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:31 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/07 03:04:45 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal (const WrongAnimal& src);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal& rhs);
		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};

#endif