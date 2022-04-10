/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:19:00 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 15:23:41 by tidurand         ###   ########.fr       */
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
		Fixed operator+(const Fixed& rhs) const;
		Fixed operator-(const Fixed& rhs) const;
		Fixed operator*(const Fixed& rhs) const;
		Fixed operator/(const Fixed& rhs) const;
		
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		bool operator>(const Fixed& rhs) const;
		bool operator>=(const Fixed& rhs) const;
		bool operator<(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator==(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;
		
		static Fixed &max(Fixed &a, Fixed &b) ;
		static const Fixed &max(const Fixed &a, const Fixed &b) ;
		static Fixed &min(Fixed &a, Fixed &b) ;
		static const Fixed &min(const Fixed &a, const Fixed &b) ;
		
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