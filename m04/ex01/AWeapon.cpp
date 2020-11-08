/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:13:34 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/08 15:26:52 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>
#include <iostream>
#include <cmath>

AWeapon::AWeapon()
{
	this->_name = "";
	this->_apcost = 0;
	this->_damage = 0;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	std::cout << name << ", AP: " << apcost << ", dmg:  " << damage << std::endl;
}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
	std::cout << "Copy AWeapon " << copy.getName() << std::endl;
}

AWeapon::~AWeapon()
{
	std::cout << "destructor" << std::endl;
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

//void				AWeapon::attack() const
//{//moet dit ook in de cpp?
//}

void				AWeapon::operator=(AWeapon const &src)
{
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();
	std::cout << "Assignation operator overload to " << this->_name << "." << std::endl;
}

//std::ostream		&operator<<(std::ostream &o, AWeapon const &src)
//{
//	o << "I am " << src.getName() << ", " << src.getTitle() << " and I like ponies!" << std::endl;
//	return (o);
//}
