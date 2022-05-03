/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:01:08 by tidurand          #+#    #+#             */
/*   Updated: 2022/04/09 17:46:48 by tidurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):  _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
:  _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "Best Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& rhs)
{
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
	this->_energyPoints -= 1;
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