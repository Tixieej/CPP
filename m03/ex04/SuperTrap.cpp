/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Supertrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:33:33 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/07 14:36:57 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap()
{
	std::cout << "Default Supertrap Constructor" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	this->_name = this->FragTrap::_name;
	std::cout << "SUP3R-TP " << name << ": Hello, I am a combination." << std::endl;
	this->_HP = this->FragTrap::_HP;
	this->_maxHP = this->FragTrap::_maxHP;
	this->_energy = this->NinjaTrap::_energy;
	this->_maxEnergy = this->NinjaTrap::_maxEnergy;
	this->_level = 1;
	this->_meleeAtkDmg = this->NinjaTrap::_meleeAtkDmg;
	this->_rangedAtkDmg = this->FragTrap::_rangedAtkDmg;
	this->_armorDmgRed = this->FragTrap::_armorDmgRed;
}

SuperTrap::SuperTrap(SuperTrap const &copy) : FragTrap(), NinjaTrap()
{
	std::cout << "=====name: " << copy._name << "===" << std::endl;
	std::cout << "SUP3R-TP copy " << copy.getName() << ": Look out everyone, this is awesome!" << std::endl;
	*this = copy;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP " << this->_name << " is destructed." << std::endl;
}

void		SuperTrap::operator=(SuperTrap const &src)
{
	std::cout << "trying to copy " << src._name << std::endl;
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
