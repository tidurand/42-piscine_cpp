/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:34:33 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/11 18:36:34 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

int		searchType(char *s);
void	castChar(char *s);
void	castInt(char *s);
void	castFloat(char *s);
void	castDouble(char *s);