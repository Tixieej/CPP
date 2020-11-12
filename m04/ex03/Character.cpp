/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 15:46:33 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 16:36:46 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{

}

Character::Character(std::string name) : _name(name)
{

}

Character::Character(Character &copy)
{

}

Character::~Character(void)
{

}

Character			&Character::operator=(Character const &rhs)
{

}

std::string const	&Character::getName(void)
{
	return (this->_name);
}

void				equip(AMateria* m)
{
}

void				unequip(int idx)
{
}

void				use(int idx, ICharacter &target)
{

}
