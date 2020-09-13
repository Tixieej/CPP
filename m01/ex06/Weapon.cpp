/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 19:00:45 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/12 15:20:32 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

std::string		Weapon::getType() const
{
	return (this->type);
}

void				Weapon::setType(std::string type)
{
	std::cout << "[set weapon type to " << type << "]" << std::endl;
	this->type = type;
}
