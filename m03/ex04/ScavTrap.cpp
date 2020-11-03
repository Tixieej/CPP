/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:39:05 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/03 11:12:47 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SC4V-TP " << name << ": Let's get this party started!" << std::endl;
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_level = 1;
	this->_meleeAtkDmg = 20;
	this->_rangedAtkDmg = 15;
	this->_armorDmgRed = 3;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy.getName())
{
	std::cout << "SC4V-TP copy " << copy.getName() << ": Let's start this party!" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << this->_name << ": Goodbye." << std::endl;
}

void		ScavTrap::operator=(ScavTrap const &src)
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

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->_energy < 25)
		std::cout << "SC4V-TP " << this->_name << " tries to challenge " << target << ", but is out of energy." << std::endl;
	else
	{
		this->_energy -= 25;
		int rn;

		rn = rand() % 7;
		std::string challenges[7] = {
			"an obstacle course",
			"a duel",
			"a dance battle",
			"do a barrel roll",
			"solve a sudoku",
			"walk away and never return",
			"be a better person"
		};

		std::cout << "SC4V-TP " << this->_name << " challenges " << target << " to " <<  challenges[rn] << std::endl;
	}
}
