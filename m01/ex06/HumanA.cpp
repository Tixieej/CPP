/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:30:23 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 13:21:49 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string a, Weapon &weapon) : _name(a), _weapon(weapon)
{
	std::cout << "Welcome, " << a << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " dies" << std::endl;
}

void		HumanA::attack() const
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
