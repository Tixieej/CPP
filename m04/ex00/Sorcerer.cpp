/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 10:21:02 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/08 11:46:15 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include <string>
#include <iostream>
#include <cmath>

Sorcerer::Sorcerer()
{
	this->_name = "default";
	this->_title = "default";
	std::cout << "A default Sorcerer is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	*this = copy;
	std::cout << "Copy Sorcerer " << copy.getName() << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string			Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string			Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void				Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

void				Sorcerer::operator=(Sorcerer const &src)
{
	this->_name = src.getName();
	this->_title = src.getTitle();
	std::cout << "Assignation operator overload to " << this->_name << "." << std::endl;
}

std::ostream		&operator<<(std::ostream &o, Sorcerer const &src)
{
	o << "I am " << src.getName() << ", " << src.getTitle() << " and I like ponies!" << std::endl;
	return (o);
}
