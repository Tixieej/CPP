/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:30:23 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/12 14:21:54 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string a, Weapon &weapon) : name(a), weapon(&weapon)
{
	std::cout << "Welcome, " << name << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " dies" << std::endl;
}

void		HumanA::attack()
{
	std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}
