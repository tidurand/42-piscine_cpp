/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:31:14 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/12 13:43:25 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

bool isChar(char *s)
{
	if (s[0] && s[1])
		return false;
	if (isdigit(s[0]))
		return false;
	if (isprint(s[0]))
		return true;
	return false;
}

bool isInt(char *s)
{
	int i = 0;
	if (s[0] == '-' && isdigit(s[1]))
		i++;
	while (s[i])
	{
		if (isdigit(s[i]) == 0)
			return false;
		i++;
	}
	if (atof(s) > 2147483647 || atof(s) < -2147483648)
		return false;
	return true;
}

bool isFloat(char *s)
{
	int i = 0;
	std::string str = s;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	if (s[0] == '-' && isdigit(s[1]))
		i++;
	while (s[i])
	{
		if (isdigit(s[i]) == 0)
			break;
		i++;
	}
	if (s[i] == '.' && isdigit(s[i + 1]))
		i++;
	while (s[i + 1])
	{
		if (isdigit(s[i]) == 0)
			return false;
		i++;
	}
	if (i > 0 && s[i] == 'f')
		return true;
	return false;
}

bool isDouble(char *s)
{
	int i = 0;
	std::string str = s;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	if (s[0] == '-')
		i++;
	while (s[i])
	{
		if (isdigit(s[i]) == 0)
			break;
		i++;
	}
	if (s[i] == '.' && isdigit(s[i + 1]))
		i++;
	while (s[i])
	{
		if (isdigit(s[i]) == 0)
			return false;
		i++;
	}
	return true;
}

int	searchType(char *s)
{
	int type = 0;
	if (isChar(s) == 1)
		type = CHAR;
	if (isFloat(s) == 1)
		type = FLOAT;
	if (isDouble(s) == 1)
		type = DOUBLE;
	if (isInt(s) == 1)
		type = INT;
	return type;
}

void	castChar(char *s)
{
	int i = static_cast<int>(s[0]);
	float f = static_cast<float>(s[0]);
	double d = static_cast<double>(s[0]);

	std::cout << "char: " << s[0] << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	castInt(char *s)
{
	double d = atof(s);
	float f = static_cast<float>(d);
	int i = static_cast<int>(d);
	char c = static_cast<char>(d);
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (atof(s) > 127 || atof(s) < -128 || isnan(d) || isinf(d))
		std::cout << "char: " << "impossible" << std::endl;
	else
		std::cout << "char: " << "no printable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d <<std::endl;
}

void	castFloat(char *s)
{
	
	double d = atof(s);
	float f = static_cast<float>(d);
	int i = static_cast<int>(d);
	char c = static_cast<char>(d);
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (atof(s) > 127 || atof(s) < -128 || isnan(d) || isinf(d))
		std::cout << "char: " << "impossible" << std::endl;
	else
		std::cout << "char: " << "no printable" << std::endl;
	if (atof(s) > 2147483647 || atof(s) < -2147483648 || isnan(d) || isinf(d))
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << std::endl;
	std::cout << "double: " << d <<std::endl;
}

void	castDouble(char *s)
{
	double d = atof(s);
	float f = static_cast<float>(d);
	int i = static_cast<int>(d);
	char c = static_cast<char>(d);
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (atof(s) > 127 || atof(s) < -128 || isnan(d) || isinf(d))
		std::cout << "char: " << "impossible" << std::endl;
	else
		std::cout << "char: " << "no printable" << std::endl;
	if (atof(s) > 2147483647 || atof(s) < -2147483648 || isnan(d) || isinf(d))
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f  << std::endl;
	std::cout << "double: " << d <<std::endl;
}