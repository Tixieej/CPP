/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:13:34 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 14:11:33 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>
#include <iostream>
#include <cmath>

AWeapon::AWeapon() : _name(), _apcost(0), _damage(0)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
	std::cout << "Copy AWeapon " << copy.getName() << std::endl;
}

AWeapon::~AWeapon()
{
	std::cout << "Weapon destructed" << std::endl;
}

std::string			AWeapon::getName(void) const
{
	return (this->_name);
}

int					AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int					AWeapon::getDamage(void) const
{
	return (this->_damage);
}

AWeapon				&AWeapon::operator=(AWeapon const &src)
{
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();
	std::cout << "Assignation operator overload to " << this->_name << "." << std::endl;
	return (*this);
}
