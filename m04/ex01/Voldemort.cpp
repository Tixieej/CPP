/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Voldemort.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 14:23:52 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 14:30:35 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Voldemort.hpp"
#include <string>
#include <iostream>
#include <cmath>

Voldemort::Voldemort(void) : Enemy(150, "Voldemort")
{
	std::cout << "Avada Kedavra!" << std::endl;
}

Voldemort::Voldemort(Voldemort const &copy) : Enemy(copy)
{
	std::cout << "Copy Voldemort." << std::endl;
}

Voldemort::~Voldemort()
{
	std::cout << "Noooo! I thought I was immortal...." << std::endl;
}

Voldemort			&Voldemort::operator=(Voldemort const &src)
{
	this->_hp = src.getHP();
	this->_type = src.getType();
	return (*this);
}
