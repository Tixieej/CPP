/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 11:58:56 by rixt          #+#    #+#                 */
/*   Updated: 2021/05/24 11:29:45 by rde-vrie      ########   odam.nl         */
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
	std::cout << "copy type is: " << copy.getType() << std::endl;
	*this = copy;
}

AMateria::~AMateria(void)
{
	std::cout << "destroy " << this->_type << std::endl;
}

AMateria				&AMateria::operator=(AMateria const &src)
{
	this->_type = src.getType();
	this->_xp = src.getXP();
	return (*this);
}

std::string const		&AMateria::getType() const //Returns the materia type
{
	return (this->_type);
}

unsigned int			AMateria::getXP() const //Returns the Materia's XP
{
	return (this->_xp);
}

void					AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	(void)target;
}
