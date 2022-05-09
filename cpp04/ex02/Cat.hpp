/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 01:45:31 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/09 16:42:15 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat (const Cat& src);
		virtual ~Cat();
		Cat &operator=(const Cat& rhs);
		void makeSound() const;
		Brain *getBrain();
	private:
		Brain *brain;
};

#endif