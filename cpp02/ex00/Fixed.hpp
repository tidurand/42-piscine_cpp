/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:19:00 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 11:41:28 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed (const Fixed& src);
		~Fixed();
		Fixed &operator=(const Fixed& rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		 int _nb;
		 static const int _bits = 8;
};

#endif