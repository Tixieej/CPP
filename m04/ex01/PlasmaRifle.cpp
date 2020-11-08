/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:46:21 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/08 15:57:32 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <string>
#include <iostream>
#include <cmath>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
//	this->_name = "Plasma Rifle";
//	this->_apcost = 5;
//	this->_damage = 21;
}

//PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
//{
//	std::cout << name << ", AP: " << apcost << ", dmg:  " << damage << std::endl;
//} volgens mij moet deze weg, want de waardes staan vast

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy)
{
	std::cout << "Copy PlasmaRifle " << copy.getName() << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "destructor pr" << std::endl;
}



//void				PlasmaRifle::attack() const
//{//moet dit ook in de cpp?
//}

//void				PlasmaRifle::operator=(PlasmaRifle const &src)
//{
//	this->_name = src.getName();
//	this->_apcost = src.getAPCost();
//	this->_damage = src.getDamage();
//	std::cout << "Assignation operator overload to " << this->_name << "." << std::endl;
//}

//std::ostream		&operator<<(std::ostream &o, PlasmaRifle const &src)
//{
//	o << "I am " << src.getName() << ", " << src.getTitle() << " and I like ponies!" << std::endl;
//	return (o);
//}
