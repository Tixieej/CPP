/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Supertrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:33:33 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/03 13:52:06 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap(std::string name) : FragTrap(_HP) FragTrap(name)
{
	std::cout << "SUP3R-TP " << name << ": Hello, I am a combination." << std::endl;
//	this->_HP = 100;
	this->_maxHP = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 1;
	this->_meleeAtkDmg = 30;
	this->_rangedAtkDmg = 20;
	this->_armorDmgRed = 5;
}

SuperTrap::SuperTrap(SuperTrap const &copy) : FragTrap(copy)
{
	std::cout << "SUP3R-TP copy " << copy.getName() << ": Look out everyone, this is awesome!" << std::endl;
	*this = copy;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP " << this->_name << " is destructed." << std::endl;
}

void		SuperTrap::operator=(SuperTrap const &src)
{
	this->_HP = src._HP;
	this->_maxHP = src._maxHP;
	this->_energy = src._energy;
	this->_maxEnergy = src._maxEnergy;
	this->_level = src._level;
	this->_name = src.getName();
	this->_meleeAtkDmg = src._meleeAtkDmg;
	this->_rangedAtkDmg = src._rangedAtkDmg;
	this->_armorDmgRed = src._armorDmgRed;
	std::cout << "Assignation operator overload to " << this->_name << "." << std::endl;
}
