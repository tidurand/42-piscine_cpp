/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:49:29 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/13 13:11:46 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
class Array
{
	Array(void);
	Array(int n);
	Array(const Array<T> & src);
	Array<T> &operator=(const Stack<T> & rhs);
	~Array();
	Array<T> operator[](); // todo
	int	size(void);
}