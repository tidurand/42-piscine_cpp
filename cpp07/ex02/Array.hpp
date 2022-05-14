/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:49:29 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/14 12:22:31 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template <class T>
class Array
{
	public :
		Array(void): _size(0){};
		Array(int n)
		{
			_size = n;
			_array = new T[n];
		};
		Array(const Array<T> & src):_size(src._size), _array(new T[src._size])
		{
			for (int i = 0; i < _size; i++)
				_array[i] = src._array[i];
		};
		~Array(){delete [] _array;};
		
		Array<T> &operator=(const Array<T> & rhs)
		{
			_size = rhs._size;
			for (int i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
			return (*this);
		};
		Array<T> operator[](const int i)
		{
			if (i < 0 || i >= _size)
				throw BadIndex();
			return _array[i];
		};
		
		int	size(void){return _size;};
		
		class BadIndex : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Bad Index");}
		};
		
	private :
		int _size;
		T *_array;
};

// template <class T>
// std::ostream & operator<<(std::ostream& o, const Array<T>& rhs)
// {
// 	o << rhs[0];
// 	return o;
// }