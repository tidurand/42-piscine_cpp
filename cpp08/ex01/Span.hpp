/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:01:54 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/15 15:48:40 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
#include <cstdlib>


class	Span
{
	public:
		Span(unsigned int N = 0);
		Span(const Span& src);
		Span	&operator=(const Span& rhs);
		~Span();


		void	addNumber(int nb);
		void	fillNumbers(int nb, int range);
		long	shortestSpan();
		long	longestSpan();
		class FewElements : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :only 0 or 1 element");}
		};
		class TooMuchElements : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{return ("Error :Too much elements");}
		};

	private:
		unsigned int _sizemax;
		unsigned int _size;
		std::vector<int> _array;
};

#endif
