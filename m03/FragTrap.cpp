/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 11:48:10 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/31 12:48:18 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FR4G-TP is constructed" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP is destructed" << std::endl;
}

rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP" << this.name << " attacks " << target << " at range, causing " << this.rangeattackdamage << " points of damage!" << std::endl;
}

meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP" << this.name << " attacks " << target << " at range, causing " << this.rangeattackdamage << " points of damage!" << std::endl;
}

takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP" << this.name << " attacks " << target << " at range, causing " << this.rangeattackdamage << " points of damage!" << std::endl;
}
