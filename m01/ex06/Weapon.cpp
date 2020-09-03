/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 19:00:45 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/03 22:47:48 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon()
{
	std::cout << "start Weapon" << std::endl;

}

Weapon::~Weapon()
{
	std::cout << "end Weapon" << std::endl;

}

const &std::string	Weapon::getType()
{
	std::cout << "get type" << std::endl;
	return (this->type);
}

void				Weapon::setType(std::string type)
{
	std::cout << "set type" << std::endl;
	this->type = type;
}
reference to this string. Also has a setType.
