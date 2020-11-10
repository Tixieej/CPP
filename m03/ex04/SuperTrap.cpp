/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Supertrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:33:33 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/10 10:27:33 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap(void)
{
	std::cout << "Anonymous SUP3R-TP: Hello, I am a combination." << std::endl;
	this->_HP = this->FragTrap::_HP;
	this->_maxHP = this->FragTrap::_maxHP;
	this->_energy = this->NinjaTrap::_energy;
	this->_maxEnergy = this->NinjaTrap::_maxEnergy;
	this->_level = 1;
	this->_meleeAtkDmg = this->NinjaTrap::_meleeAtkDmg;
	this->_rangedAtkDmg = this->FragTrap::_rangedAtkDmg;
	this->_armorDmgRed = this->FragTrap::_armorDmgRed;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
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

SuperTrap::SuperTrap(SuperTrap const &copy)
{
	*this = copy;
	std::cout << "SUP3R-TP copy " << copy.getName() << ": Look out everyone, this is awesome!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP " << this->_name << " is destructed." << std::endl;
}

SuperTrap			&SuperTrap::operator=(SuperTrap const &src)
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
	return (*this);
}
