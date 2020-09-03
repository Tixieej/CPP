/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:27:41 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 14:40:27 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent wave;
	Zombie *edwin, *gerard, *petra;
	wave.setZombieType("Walker");
	edwin = wave.newZombie("Edwin");
	edwin->announce();
	gerard = wave.newZombie("Gerard");
	petra = wave.newZombie("Petra");	
	petra->announce();
	delete edwin;
	delete gerard;
	delete petra;

	Zombie *z_1, *z_2, *z_3, *z_4;
	wave.setZombieType("Runner");
	z_1 = wave.randomChump();	
	z_2 = wave.randomChump();
	z_3 = wave.randomChump();
	z_4 = wave.randomChump();
	delete z_1;	
	delete z_2;	
	delete z_3;	
	delete z_4;	

	return (0);
}
