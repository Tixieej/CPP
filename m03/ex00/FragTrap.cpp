/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:47:43 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/01 09:15:15 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>

FragTrap::FragTrap(std::string name)
{
	std::cout << "FR4G-TP is constructed" << std::endl;
	this->HP = 100;
	this->maxHP = 100;
	this->energy = 100;
	this->maxEnergy = 100;
	this->level = 1;
	this->name = name;
	this->meleeAtkDmg = 30;
	this->rangedAtkDmg = 20;
	this->armorDmgRed = 5;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
	std::cout << "Copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP is destructed" << std::endl;
}

void FragTrap::operator=(FragTrap const &fragtrap)
{
	std::cout << "assignation operator overload" << std::endl;
	this->? = naam.get();
}

rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rangedAtkDmg << " points of damage!" << std::endl;
}

meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " from nearby, causing " << this->meleeAtkDmg << " points of damage!" << std::endl;
}

takeDamage(unsigned int amount)
{	
	int damage = amount - this->armorDmgRed;
	this->HP -= damage;
	std::cout << "Enemy attacks FR4G-TP " << this->name << " with " << amount << " of damage, causing " << damage << " points of damage!" << std::endl;
}

beRepaired(unsigned int amount)
{
	this->HP += amount;
	std::cout << "FR4G-TP " << this->name << " is being repaired for " << amount << " hp, causing " << this->HP << " Health points!" << std::endl;
}
