/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:26:37 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 15:51:30 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"
	
ZombieEvent::ZombieEvent()
{
	std::cout << "New event" << std::endl;
	return;
}

ZombieEvent::~ZombieEvent()
{

	std::cout << "Event ended" << std::endl;
	return;
}

void		ZombieEvent::setZombieType(std::string const type)
{	
	this->type = type;
}

Zombie* 	ZombieEvent::newZombie(std::string const name)
{
	Zombie *zombie = new Zombie(this->type, name);
	return (zombie);
}

void		ZombieEvent::randomChump()
{
	std::string names[10] = ["Harry", "Rob", "Zorro", "Marcus", "Fred", "Gina", "Dirk", "Selma", "Tessa", "Erin"];
	this->newZombie(names[1]);
}
//You will also make a randomChump function, that will create a Zombie with a random name, and make it announce itself. 
//After this, you will create a ZombieEventclass. It will have a setZombieType function, that will store a type in the object, and a function Zombie* newZombie(std::string name) that will create a Zombie with the chosen type, name it, and return it.
