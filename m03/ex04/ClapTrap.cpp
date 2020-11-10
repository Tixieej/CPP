/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:29:14 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/10 10:23:43 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(void) : _name()
{
	std::cout << "--> Anonymous CL4P-TP is constructed: " << std::endl;
	this->_HP = 0;
	this->_maxHP = 0;
	this->_energy = 0;
	this->_maxEnergy = 0;
	this->_level = 1;
	this->_meleeAtkDmg = 0;
	this->_rangedAtkDmg = 0;
	this->_armorDmgRed = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "--> CL4P-TP " << name << " is constructed: " << std::endl;
	this->_HP = 0;
	this->_maxHP = 0;
	this->_energy = 0;
	this->_maxEnergy = 0;
	this->_level = 1;
	this->_meleeAtkDmg = 0;
	this->_rangedAtkDmg = 0;
	this->_armorDmgRed = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "--> A copy of CL4P-TP " << copy.getName() << " is constructed: " << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << this->_name << " is at the end of its life." << std::endl;
}

void		ClapTrap::operator=(ClapTrap const &src)
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

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAtkDmg << " points of damage!" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " from nearby, causing " << this->_meleeAtkDmg << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Enemy attacks CL4P-TP " << this->_name;
	int damage = amount - this->_armorDmgRed;
	if (this->_HP <= 0)
		std::cout << ", but HP is already at 0." << std::endl;
	else if (damage <= 0)
		std::cout << ", but no damage is taken." << std::endl;
	else
	{
		this->_HP -= damage;
		std::cout << " and " << damage << " damage is taken." << std::endl;
	}
	if (this->_HP < 0)
		this->_HP = 0;
	std::cout << "HP is now at " << this->_HP << "!" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->_HP += amount;
	if (this->_HP > this->_maxHP)
		this->_HP = this->_maxHP;
	std::cout << "CL4P-TP " << this->_name << " is being repaired for " << amount << " HP." << std::endl;

	std::cout << "HP is now at " << this->_HP << "!" << std::endl;
}
