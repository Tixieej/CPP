/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:30:23 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 13:21:47 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << "Welcome, " << name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " dies" << std::endl;
}

void		HumanB::attack() const
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << "Weapon of " << this->_name << " set to " << this->_weapon->getType() << std::endl;
}
