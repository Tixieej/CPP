/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 10:46:15 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 14:17:30 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <string>
#include <iostream>
#include <cmath>

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy)
{
	std::cout << "Copy SuperMutant." << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void				SuperMutant::takeDamage(int dmg)
{
	if (dmg >= 3)
		this->_hp += 3 - dmg;
}

SuperMutant			&SuperMutant::operator=(SuperMutant const &src)
{
	this->_hp = src.getHP();
	this->_type = src.getType();
	return (*this);
}
