/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:19:00 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 13:25:53 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int nb);
		Fixed(float nb);
		Fixed (const Fixed& src);
		~Fixed();
		Fixed &operator=(const Fixed& rhs);
		
		int		toInt(void) const;
		float	toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		 int _nb;
		 static const int _bits = 8;
};

std::ostream & operator<<(std::ostream& o, const Fixed& rhs);

#endif