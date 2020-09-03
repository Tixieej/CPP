/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:26:37 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 15:56:59 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
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

Zombie*		ZombieEvent::randomChump()
{
	int rn;
	std::string names[10] = {"Harry", "Rob", "Zorro", "Marcus", "Fred", "Gina", "Dirk", "Selma", "Tessa", "Erin"};
	rn = rand() % 10;
	Zombie *zombie = new Zombie(this->type, names[rn]);
	zombie->announce();
	return (zombie);
}
