/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:21:58 by rixt          #+#    #+#                 */
/*   Updated: 2021/04/27 12:58:57 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
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

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice*	Ice::clone() const // dit klopt volgens mij niet, maar eerst zorgen dat het compiled
{
	Ice *clone = new Ice(*this);
	return (clone);
}
