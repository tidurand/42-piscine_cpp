/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:51:34 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/12 15:00:01 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct Data
{
	char c;
	int i;
}	Data;

uintptr_t serialize(Data *ptr)
{
	uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}

Data *deserialize(uintptr_t raw)
{
	Data *d = reinterpret_cast<Data *>(raw);
	return d;
}

int main()
{
	Data *data = new Data;
	Data *cpy = new Data;
	uintptr_t p;

	data->c = 'a';
	data->i = 39;
	std::cout << "data = char : " << data->c << " int : " << data->i << " ptr : " << data << std::endl;
	
	p = serialize(data);
	std::cout << "p = " << p << std::endl;
	cpy = deserialize(p);
	std::cout << "cpy = char : " << cpy->c << " int : " << cpy->i << " ptr : " << cpy << std::endl;
	delete data;
	return 0;
}