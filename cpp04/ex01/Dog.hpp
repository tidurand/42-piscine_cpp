/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:31 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 16:43:56 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog (const Dog& src);
		virtual ~Dog();
		Dog &operator=(const Dog& rhs);
		void makeSound() const;
		Brain *getBrain();
	private:
		Brain *brain;
};

#endif