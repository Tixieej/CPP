/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 09:39:05 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/02 11:59:07 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << "-->SC4V-TP " << name << ": Let's get this party started!" << std::endl;
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_level = 1;
	this->_meleeAtkDmg = 20;
	this->_rangedAtkDmg = 15;
	this->_armorDmgRed = 3;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout << "-->A copy of SC4V-TP " << copy.getName() << " introduces itself." << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << this->_name << " says goodbye." << std::endl;
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

std::string	ScavTrap::getName(void) const
{
	return (this->_name);
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " does " << this->_rangedAtkDmg << " points of damage to " << target << " with a ranged attack!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " does " << this->_meleeAtkDmg << " points of damage to " << target << " with a melee attack!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "SC4V-TP " << this->_name << " is being attacked by enemy";
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

void		ScavTrap::beRepaired(unsigned int amount)
{
	this->_HP += amount;
	if (this->_HP > this->_maxHP)
		this->_HP = this->_maxHP;
	std::cout << "Reparation for SC4V-TP " << this->_name << " for " << amount << " HP." << std::endl;

	std::cout << "HP is now at " << this->_HP << "!" << std::endl;
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
