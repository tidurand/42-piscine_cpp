/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:01:08 by tidurand          #+#    #+#             */
/*   Updated: 2022/05/06 13:33:28 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("TOTO"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Str Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : _name(src._name), _hitPoints(src._hitPoints),
_energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "EQUAL" << std::endl;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	this->_name = rhs._name;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints < 1)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attack " << target;
	std::cout << ", causing " << _attackDamage << " points of damage !" << std::endl;
	std::cout << "Il reste " << _energyPoints << " points d'energie !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " lost ";
	std::cout << amount << " hitPoints !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints < 1)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " earn ";
	std::cout << amount << " hitPoints !" << std::endl;
}

int	ClapTrap::getHitPoints(void)
{
	return _hitPoints;
}

int	ClapTrap::getEnergyPoints(void)
{
	return _energyPoints;
}

int	ClapTrap::getAttackDamage(void)
{
	return _attackDamage;
}

void	ClapTrap::setHitPoints(int nb)
{
	_hitPoints = nb;
}

void	ClapTrap::setEnergyPoints(int nb)
{
	_energyPoints = nb;
}

void	ClapTrap::setAttackDamage(int nb)
{
	_attackDamage = nb;
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}