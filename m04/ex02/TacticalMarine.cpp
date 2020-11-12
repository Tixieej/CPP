/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 10:53:14 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 13:39:01 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(void)// : ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy) //: ISpaceMarine(copy)
{
	std::cout << "Copy Tactical Marine ready for battle!" << std::endl;
	*this = copy;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine		&TacticalMarine::operator=(TacticalMarine const &src)
{
	return (*this);
}

ISpaceMarine*		TacticalMarine::clone() const
{
	ISpaceMarine* clone = new TacticalMarine(*this);
	return (clone);
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
