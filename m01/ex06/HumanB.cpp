/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:30:23 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/03 22:50:33 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	std::cout << "B" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "end B" << std::endl;
}

//a Weapon, a name, and
//an attack() function that displays something like:
//NAME attacks with his WEAPON_TYPE
//Make it so the following code produces attacks with "crude spiked club" THEN "some
//other type of club", in both test cases:
