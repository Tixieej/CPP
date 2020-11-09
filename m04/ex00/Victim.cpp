/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 10:44:55 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 15:10:04 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <string>
#include <iostream>

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &copy)
{
	std::cout << "Copy Victim " << copy.getName() << std::endl;
	*this = copy;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}


std::string		Victim::getName(void) const
{
	return (this->_name);
}

void			Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

void			Victim::operator=(Victim const &src)
{
	this->_name = src.getName();
	std::cout << "Assignation operator overload to " << this->_name << "." << std::endl;
}

std::ostream		&operator<<(std::ostream &o, Victim const &src)
{
	o << "I am " << src.getName() << " and I like otters!" << std::endl;
	return (o);
}
