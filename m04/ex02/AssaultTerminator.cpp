/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 17:21:48 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 08:49:10 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator(void) : ISpaceMarine()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy) : ISpaceMarine(copy)
{
	std::cout << "Copy Tactical Marine ready for battle!" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator		&AssaultTerminator::operator=(AssaultTerminator const &src)
{
//	this->_name = src.getName();
	return (*this);
}

//AssaultTerminator::~ISpaceMarine() {}

ISpaceMarine*			AssaultTerminator::clone() const
{
	ISpaceMarine *clone = new AssaultTerminator(*this);
	return (clone);
}

void					AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
