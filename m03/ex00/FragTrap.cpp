/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:47:43 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/10 09:56:04 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void) : _name()
{
	std::cout << "--> Anonymous FR4G-TP: Look out everybody! Things are about to get awesome!" << std::endl;
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 1;
	this->_meleeAtkDmg = 30;
	this->_rangedAtkDmg = 20;
	this->_armorDmgRed = 5;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "--> FR4G-TP " << name << ": Look out everybody! Things are about to get awesome!" << std::endl;
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 1;
	this->_meleeAtkDmg = 30;
	this->_rangedAtkDmg = 20;
	this->_armorDmgRed = 5;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "A copy of FR4G-TP " << copy.getName() << " is constructed." << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << " is destructed." << std::endl;
}

void		FragTrap::operator=(FragTrap const &src)
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

std::string	FragTrap::getName(void) const
{
	return (this->_name);
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAtkDmg << " points of damage!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " from nearby, causing " << this->_meleeAtkDmg << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "Enemy attacks FR4G-TP " << this->_name;
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

void		FragTrap::beRepaired(unsigned int amount)
{
	this->_HP += amount;
	if (this->_HP > this->_maxHP)
		this->_HP = this->_maxHP;
	std::cout << "FR4G-TP " << this->_name << " is being repaired for " << amount << " HP." << std::endl;

	std::cout << "HP is now at " << this->_HP << "!" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energy < 25)
		std::cout << "FR4G-TP " << this->_name << " tries to attack " << target <<  ", but is out of energy." << std::endl;
	else
	{
		this->_energy -= 25;
		int rn;

		rn = rand() % 15;
		std::string attacks[15] = {
			"Clap-In-The-Box",
			"Gun Wizard",
			"Torgue Fiesta",
			"Pirate Ship Mode",
			"One Shot Wonder",
			"Laser Inferno",
			"Miniontrap",
			"Meat Unicycle",
			"Funzerker",
			"Mechromagician",
			"Shhhh... Trap!",
			"Blight Bot",
			"Rubber Ducky",
			"Senseless Sacrifice",
			"Medbot"
		};

		std::cout << "F to the R to the 4 to the G to the WHAAT!" << std::endl;
		std::cout << "FR4G-TP " << this->_name << " sends action package " <<  attacks[rn] << " to " << target << "." << std::endl;
	}
}
