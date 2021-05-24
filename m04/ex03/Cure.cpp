/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 13:54:31 by rixt          #+#    #+#                 */
/*   Updated: 2021/05/24 14:45:20 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
}

Cure::~Cure(void)
{
}

Cure			&Cure::operator=(Cure const &rhs)
{
	this->_type = rhs.getType();
	this->_xp = rhs.getXP();
	return (*this);
}

Cure*		Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}

void			Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
