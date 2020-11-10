/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:47:43 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/10 10:31:30 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Anonymous FR4G-TP: Look out everybody! Things are about to get awesome!" << std::endl;
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 1;
	this->_meleeAtkDmg = 30;
	this->_rangedAtkDmg = 20;
	this->_armorDmgRed = 5;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FR4G-TP " << name << ": Look out everybody! Things are about to get awesome!" << std::endl;
	this->_HP = 100;
	this->_maxHP = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 1;
	this->_meleeAtkDmg = 30;
	this->_rangedAtkDmg = 20;
	this->_armorDmgRed = 5;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	std::cout << "FR4G-TP copy " << copy.getName() << ": Look out everyone, this is awesome!" << std::endl;
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energy < 25)
		std::cout << "FR4G-TP " << this->_name << " tries to attack " << target << ", but is out of energy." << std::endl;
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
		std::cout << "FR4G-TP " << this->_name << " sends action package " <<  attacks[rn] << " to " << target << "." << std::endl;
	}
}
