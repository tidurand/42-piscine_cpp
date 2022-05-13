/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 17:54:36 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/13 14:58:58 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[4] = {1, 2, 3, 4};
	char str[6] = "salut";
	std::string str2[2] = {"abc", "def"};
	
	iter<int>(tab, 4, print<int>);
	iter<char>(str, 5, print<char>);
	iter<std::string>(str2, 2, print<std::string>);
	return 0;
}