/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:25:31 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 14:40:26 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->type = "";
	this->name = "";
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
	std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiinnnssss..." << std::endl;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
