/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:26:37 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 14:47:43 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

	
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

void		setZombieType()
{

}

Zombie* 	new Zombie(std::string name)
{
}
//After this, you will create aZombieEventclass. It will have asetZombieTypefunc-tion, that will store a type in the object, and a functionZombie* newZombie(std::stringname)that will create aZombiewith the chosen type, name it, and return it.
