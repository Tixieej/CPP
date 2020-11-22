/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dwarf.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:32:55 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 12:32:15 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dwarf.hpp"
#include <string>
#include <iostream>

Dwarf::Dwarf(void) : Victim()
{
	std::cout << "I am the son of Glóin." << std::endl;
}

Dwarf::Dwarf(std::string name) : Victim(name)
{
	std::cout << "I am " << name << " son of Glóin." << std::endl;
}

Dwarf::Dwarf(Dwarf const &copy) : Victim(copy)
{
	std::cout << "I am a proud dwarf" << std::endl;
}

Dwarf::~Dwarf()
{
	std::cout << "Not the beard!" << std::endl;
}

void				Dwarf::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a giant!" << std::endl;
}

void				Dwarf::operator=(Dwarf const &src)
{
	this->_name = src.getName();
}

std::ostream		&operator<<(std::ostream &o, Dwarf const &src)
{
	o << "I am " << src.getName() << " and I like my axe!" << std::endl;
	return (o);
}
