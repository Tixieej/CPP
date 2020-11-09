/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 11:52:26 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 16:58:34 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <string>
#include <iostream>

Peon::Peon(void) : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void				Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

void				Peon::operator=(Peon const &src)
{
	this->_name = src.getName();
}

std::ostream		&operator<<(std::ostream &o, Peon const &src)
{
	o << "I am " << src.getName() << " and I like otters!" << std::endl;
	return (o);
}
