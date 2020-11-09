/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 13:18:54 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 17:04:10 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <string>
#include <iostream>
#include <cmath>

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy) : Enemy(copy)
{
	std::cout << "Copy RadScorpion." << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void				RadScorpion::operator=(RadScorpion const &src)
{
	this->_hp = src.getHP();
	this->_type = src.getType();
}
