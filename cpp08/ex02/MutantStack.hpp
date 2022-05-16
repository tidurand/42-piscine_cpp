/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:59:53 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/16 12:27:01 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <stack>
# include <algorithm>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){};
		MutantStack(const MutantStack<T>& src){*this = src;};
		MutantStack<T>& operator=(const MutantStack<T>& rhs) 
		{
			this->c = rhs.c;
			return *this;
		};
		~MutantStack() {};

		typedef typename std::deque<T>::iterator iterator;

		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
};
#endif
