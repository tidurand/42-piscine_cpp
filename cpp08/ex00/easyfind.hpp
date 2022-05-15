/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:00:35 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/15 12:35:43 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <list>

class NotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{return ("Value not found");}
};

template<typename T>
int	easyfind(T a, int b)
{
	typename T::iterator it;
	
	it = find(a.begin(), a.end(), b);
	if (it != a.end())
		return *it;
	else
		throw NotFound();
}