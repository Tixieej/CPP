/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:48:19 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 14:10:16 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <string>
#include <iostream>
#include <cmath>

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
	std::cout << "Copy Enemy." << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Enemy destructor" << std::endl;
}

int					Enemy::getHP(void) const
{
	return (this->_hp);
}

std::string			Enemy::getType(void) const
{
	return (this->_type);
}

void				Enemy::takeDamage(int dmg)
{
	if (dmg >= 0)
		this->_hp -= dmg;
}

Enemy				&Enemy::operator=(Enemy const &src)
{
	this->_hp = src.getHP();
	this->_type = src.getType();
	std::cout << "Assignation operator overload." << std::endl;
	return (*this);
}
