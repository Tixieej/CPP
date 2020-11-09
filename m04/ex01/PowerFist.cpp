/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:04:22 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 17:26:53 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <string>
#include <iostream>
#include <cmath>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy)
{
	std::cout << "Copy PowerFist " << copy.getName() << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "PowerFist destructed" << std::endl;
}

void				PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

void				PowerFist::operator=(PowerFist const &src)
{
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();
}
