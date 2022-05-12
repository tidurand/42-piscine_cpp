/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:26:43 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/12 17:51:55 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
void swap (T &a, T &b) 
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <class T>
T max (T a, T b) 
{
	if (a > b)
		return a;
	else
		return b; 
}

template <class T>
T min (T a, T b) 
{
  if (a < b)
		return a;
	else
		return b; 
}