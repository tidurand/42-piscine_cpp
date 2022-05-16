/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:58:54 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/16 12:23:50 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	//FAIRE UN VRAI MAIN
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << std::endl;

	MutantStack<std::string> mstack2;
	if (mstack2.empty() == true)
		std::cout << "Empty Stack" << std::endl;
	mstack2.push("abc");
	mstack2.push("def");
	mstack2.push("ghi");
	mstack2.push("jkl");
	mstack2.push("mno");
	std::cout << mstack2.size() << std::endl;
	mstack2.pop();
	std::cout << mstack2.size() << std::endl;
	std::cout << *(mstack2.begin()) << std::endl;
	std::cout << mstack2.top() << std::endl;
	std::cout << std::endl;
	MutantStack<std::string>::iterator it2 = mstack2.begin();
	MutantStack<std::string>::iterator ite2 = mstack2.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}