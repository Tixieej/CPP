/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:25:31 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 19:06:47 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
	std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie ded" << std::endl;
}
//zombie class
//Make it contain a type, and a name (at least), and addanannounce()member function, that will output something along the lines of:<name (type)> Braiiiiiiinnnssss...Whatever you want, really, as long as you output the name and type of theZombie.
