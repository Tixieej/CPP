/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:21:58 by rixt          #+#    #+#                 */
/*   Updated: 2021/05/24 11:40:37 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
   // this calls the AMateria copy constructor	
}

Ice::~Ice(void)
{
}

Ice		&Ice::operator=(Ice const &rhs)
{
//	(void) src;
	this->_type = rhs.getType();
	this->_xp = rhs.getXP();
	return (*this);
}

Ice*	Ice::clone() const
{
	Ice *clone = new Ice(*this); // this is a deep copy
	return (clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
