/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 11:58:56 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/21 14:41:44 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unknown"), _xp(0)
{
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const & copy)
{
	std::cout << "copy" << std::endl;
}

AMateria::~AMateria(void)
{
}

AMateria				&AMateria::operator=(AMateria const &src)
{
	this->_type = src.getType();
	this->_xp = src.getXP();
	return (*this);
}

std::string const		&AMateria::getType() const; //Returns the materia type
{
	return (this->_type);
}

unsigned int			AMateria::getXP() const //Returns the Materia's XP
{
	return (this->_xp);
}

AMateria*				AMateria::clone() const
{
	AMateria* clone = new AMateria(*this);
	return (clone);
}

void					AMateria::use(ICharacter& target)
{
	//xp increasing by 10 upon every call to this function
//Regarding the use(ICharacter&) method, it’ll display:
//• Ice: "* shoots an ice bolt at NAME *"
//• Cure: "* heals NAME’s wounds *"
//(Of course, replace NAME by the name of the Character given as parameter.)
}
