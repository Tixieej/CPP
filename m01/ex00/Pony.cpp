/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:41:05 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 19:11:35 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, int height)
{
	this->name = name;
	this->height_cm = height;
	this->energy = 10;
	std::cout << "New pony, " << name << ", is ";
	std::cout << height << " cm tall" << std::endl;
	return;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << this->name << " has died" << std::endl;
	return;
}

void		Pony::run(int laps)
{
	std::cout << this->name << " is going to run " << laps << " laps" << std::endl;
	for (int i = 1; i <= laps; i++)
	{
		if (energy >= 1)
		{
			if (i == 1)
				std::cout << this->name << " has run " << i << " lap" << std::endl;
			else
				std::cout << this->name << " has run " << i << " laps" << std::endl;
			energy--;
		}
		else
		{
			std::cout << "Pony " << this->name << " is too tired to run" << std::endl;
			break;
		}
	}
	std::cout << this->name << " goes back to the barn" << std::endl;
}


void		Pony::feed()
{
	std::cout << this->name << " is being fed" << std::endl;
	this->energy += 10;
	std::cout << this->name << "'s energy = " << this->energy << std::endl;
}
