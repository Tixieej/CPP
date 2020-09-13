/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:30:23 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/12 15:20:19 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout << "Welcome, " << name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " dies" << std::endl;
}

void		HumanB::attack()
{
	std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &test)
{
	this->weapon = &test;
	std::cout << "Weapon of " << this->name << " set to weapon " << std::endl;
}
