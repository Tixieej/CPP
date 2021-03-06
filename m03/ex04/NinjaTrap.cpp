/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:42:15 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/10 15:06:09 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	std::cout << "Anonymous INAC: Viva la Robolution!" << std::endl;
	this->_HP = 60;
	this->_maxHP = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_level = 1;
	this->_meleeAtkDmg = 60;
	this->_rangedAtkDmg = 5;
	this->_armorDmgRed = 0;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "INAC " << name << ": Viva la Robolution!" << std::endl;
	this->_HP = 60;
	this->_maxHP = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_level = 1;
	this->_meleeAtkDmg = 60;
	this->_rangedAtkDmg = 5;
	this->_armorDmgRed = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy) : ClapTrap(copy)
{
	std::cout << "INAC copy " << copy.getName() << ":  Viva la Rorolution! I mean..." << std::endl;
	*this = copy;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "INAC " << this->_name << ": What's happening to me?" << std::endl;
}

void		NinjaTrap::operator=(NinjaTrap const &src)
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

void		NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "INAC " << this->_name << " does " << this->_meleeAtkDmg << " points of damage to " << target << " with a melee attack!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	if (this->_energy < 25)
		std::cout << "INAC " << this->_name << " tries to aim at FragTrap " << target.getName() << ", but is out of energy." << std::endl;
	else
	{
		this->_energy -= 25;
		std::cout << "INAC " << this->_name << " aims a banana at FragTrap " << target.getName() << "." << std::endl;
	}
}

void		NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	if (this->_energy < 25)
		std::cout << "INAC " << this->_name << " tries to aim at ScavTrap " << target.getName() << ", but is out of energy." << std::endl;
	else
	{
		this->_energy -= 25;
		std::cout << "INAC " << this->_name << " aims a sock at ScavTrap " << target.getName() << "." << std::endl;
	}
}

void		NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	if (this->_energy < 25)
		std::cout << "INAC " << this->_name << " tries to aim at ClapTrap " << target.getName() << ", but is out of energy." << std::endl;
	else
	{
		this->_energy -= 25;
		std::cout << "INAC " << this->_name << " aims shuriken at ClapTrap " << target.getName() << "." << std::endl;
	}
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	if (this->_energy < 25)
		std::cout << "INAC " << this->_name << " tries to aim at NinjaTrap " << target.getName() << ", but is out of energy." << std::endl;
	else
	{
		this->_energy -= 25;
		std::cout << "INAC " << this->_name << " aims some spaghetti at NinjaTrap " << target.getName() << "." << std::endl;
	}
}
