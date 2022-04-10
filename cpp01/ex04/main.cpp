/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:09:27 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/06 12:12:20 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char ** av)
{
	if (ac != 4)
	{
		std::cout << "Bad arguments" << std::endl;
		return 0;
	}
	
	std::fstream	ifs;
	std::fstream	file;
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string line;
	
	//OPEN FILES
	ifs.open("test", std::ios::in);
	if (!ifs.is_open())
	{
		std::cout << "Failed to open" << std::endl;
		return 0;
	}
	file.open("test.txt", std::ios::out);
	if (!file.is_open())
	{
		std::cout << "Failed to create" << std::endl;
		return 0;
	}

	//ADD IN FILE
	while (!ifs.eof())
	{
		std::size_t found;
		std::getline(ifs, line);
		found = line.find(s1);
		while (found != std::string::npos)
		{
			found = line.find(s1);
			if (found == std::string::npos)
				break ;
			line.erase(found, s1.length());
			line.insert(found, s2);
		}
		if (!ifs.eof())
			file << line << std::endl;
		else
			file << line;
	}
	
	ifs.close();
	file.close();
	return 0;
}