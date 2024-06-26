/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:55:54 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/13 11:23:50 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<class T>
void	print(T a)
{
	std::cout << a << std::endl;
}

template<class T>
void	iter(T *tab, int size, void (*f)(T))
{
	int i = 0;
	while (i < size)
	{
		f(tab[i]);
		i++;
	}
}