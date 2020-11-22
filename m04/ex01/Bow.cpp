/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bow.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 12:51:33 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 12:54:24 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bow.hpp"
#include <string>
#include <iostream>
#include <cmath>

Bow::Bow() : AWeapon("Bow", 3, 15)
{
}

Bow::Bow(Bow const &copy) : AWeapon(copy)
{
	std::cout << "Copy Bow " << copy.getName() << std::endl;
}

Bow::~Bow()
{
	std::cout << "Bow destructed" << std::endl;
}

void				Bow::attack() const
{
	std::cout << "* krrrr... * ... * thump *" << std::endl;
}

Bow			&Bow::operator=(Bow const &src)
{
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();
	return (*this);
}
