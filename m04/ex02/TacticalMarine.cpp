/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 10:53:14 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/10 19:13:43 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(void) : ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy) : ISpaceMarine(copy)
{
	std::cout << "Copy Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

void		TacticalMarine::operator=(TacticalMarine const &src)
{
//	this->_name = src.getName();
}

//TacticalMarine::~ISpaceMarine() {}

ISpaceMarine*		TacticalMarine::clone() const
{
		//returns a copy of the current object
	return (*this);
}

void				TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
