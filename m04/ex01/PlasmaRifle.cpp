/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:46:21 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 14:08:29 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <string>
#include <iostream>
#include <cmath>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)
{
	std::cout << "Copy PlasmaRifle " << copy.getName() << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle destructed" << std::endl;
}

void				PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle			&PlasmaRifle::operator=(PlasmaRifle const &src)
{
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();
	return (*this);
}
