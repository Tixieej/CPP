/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:47:43 by rixt          #+#    #+#                 */
/*   Updated: 2020/10/27 16:31:48 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>

FragTrap::FragTrap(std::string name)
{
	std::cout << "constructed" << std::endl;
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
	std::cout << "destructed" << std::endl;
}

void FragTrap::operator=(FragTrap const &fragtrap)
{
	std::cout << "assignation operator overload" << std::endl;
	this->? = naam.get();
}

rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << <name> << " attacks " << <target> << " at range, causing " << <damage> << " points of damage!" << std::endl;
}

meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << <name> << " attacks " << <target> << " from nearby, causing " << <damage> << " points of damage!" << std::endl;
}

takeDamage(unsigned int amount)
{

}

beRepaired(unsigned int amount)
{

}
