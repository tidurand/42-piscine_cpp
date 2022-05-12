/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:34 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/12 15:45:16 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctime>
# include <cstdlib>

class Base
{
	public :
		virtual ~Base(){};
};
class A : public Base
{};
class B : public Base
{};
class C : public Base
{};

Base *generate(void)
{
	srand(time(0));
	int i = rand() % 3;
	if (i == 0)
		return new A;
	if (i == 1)
		return new B;
	if (i == 2)
		return new C;
	return NULL;
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "class A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "class B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "class C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "class A" << std::endl;
	}
	catch (std::exception & e)
	{
		// std::cerr << e.what() << std::endl;
	}
	try
	{
		p = (dynamic_cast<B&>(p));
		std::cout << "class B" << std::endl;
	}
	catch (std::exception & e)
	{
		// std::cerr << e.what() << std::endl;
	}
	try
	{
		p = (dynamic_cast<C&>(p));
		std::cout << "class C" << std::endl;
	}
	catch (std::exception & e)
	{
		// std::cerr << e.what() << std::endl;
	}
}

int main()
{
	Base *base;
	base = generate();
	identify(*base);
	delete base;
	return 0;
}