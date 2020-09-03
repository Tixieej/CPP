/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:29:52 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 14:40:34 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde(int N) : _number(N)
{
	int		rn;

	std::cout << "-- The zombie apocalypse is here --" << std::endl;
	std::string names[10] = {"Urrgh", "Gumgum", "Chewie", "Devourarrr", "Gobbler", "Toohtz", "Briaaaan", "Rooarr", "Smelly", "Gutzz"};
	this->zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		rn = rand() % 10;
		this->zombies[i].setType("Walker");
		this->zombies[i].setName(names[rn]);
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
	std::cout << "-- The zombie apocalypse is over --" << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_number; i++)
	{
		this->zombies[i].announce();
	}
}
