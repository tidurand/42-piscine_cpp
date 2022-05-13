/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:49:29 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/13 16:13:18 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
class Array
{
	public :
		Array(void): _size(0){};
		Array(int n): _array(new T[n]), _size(n){};
		Array(const Array<T> & src):_array(new T[src._size]), _size(src._size){};
		~Array(){delete [size]};
		
		Array<T> &operator=(const Array<T> & rhs);
		Array<T> operator[](const int);
		
		int	size(void);
		
		class BadIndex : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Bad Index");}
		};
	private :
		_size;
		_*array
}
