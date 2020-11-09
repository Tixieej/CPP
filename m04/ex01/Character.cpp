/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 13:33:15 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 16:59:58 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : _name(), _ap(40), _weapon(NULL)
{
//	std::cout << "Character constructed" << std::endl;
}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{
//	std::cout << "Character constructed" << std::endl;
}

Character::Character(Character const &copy)
{
	*this = copy;
	std::cout << "Copy Character." << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
}

void				Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void				Character::equip(AWeapon *wpn)
{
	this->_weapon = wpn;
}

void				Character::attack(Enemy *enm)
{
	int		apCost = this->_weapon->getAPCost();

	if (this->_ap >= apCost)
	{
		std::cout << this->_name << " attacks " << enm->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		this->_ap -= this->_weapon->getAPCost();

		enm->takeDamage(this->_weapon->getDamage());
		if (enm->getHP() <= 0)
			delete(enm);
	}
}

std::string			Character::getName(void) const
{
	return (this->_name);
}

int					Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon				*Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream		&operator<<(std::ostream &o, Character const &src)
{
	std::cout << src.getName() << " has " << src.getAP() << " AP and ";
	if (src.getWeapon() == NULL)
		std::cout << "is unarmed" << std::endl;
	else
		std::cout << "wields a " << src.getWeapon()->getName() << std::endl;
	return (o);
}
