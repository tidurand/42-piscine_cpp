/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:02:03 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/15 16:06:56 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	_sizemax = N;
	_size = 0;
}
Span::Span(const Span& src)
{
	*this = src;
}

Span	&Span::operator=(const Span& rhs)
{
	_sizemax = rhs._sizemax;
	_size = rhs._size;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = rhs._array[i];
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	if (_size >= _sizemax)
		throw TooMuchElements();
	_size++;
	_array.push_back(nb);
}

void	Span::fillNumbers(int nb, int range)
{
	if (_size + nb > _sizemax)
		throw TooMuchElements();
	_size += nb;
	srand(time(0));
	for (int i = 0; i < nb; i++)
	{
		int value = rand() % range;
		_array.push_back(value);
	}
	
}

long	Span::longestSpan()
{
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

	if (_size < 2)
		throw FewElements();
	max = max_element(_array.begin(), _array.end());
	min = min_element(_array.begin(), _array.end());
	return *max - *min;
}

long	Span::shortestSpan()
{
	if (_size < 2)
		throw FewElements();
	sort(_array.begin(), _array.end());
	int i = 0;
	long j = 0;
	long result = _array[i + 1] - _array[i];
	while (_array[i + 1])
	{
		j = _array[i + 1] - _array[i];
		if (result > j)
			result = j;
		i++;
	}
	return result;
}