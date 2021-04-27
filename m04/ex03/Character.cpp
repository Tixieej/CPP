/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 15:46:33 by rixt          #+#    #+#                 */
/*   Updated: 2021/04/27 13:39:41 by rde-vrie      ########   odam.nl         */
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
	*this = copy;
	std::cout << "copy" << std::endl;
}

Character::~Character(void)
{

}

Character			&Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
	//stop het item op de eerste lege plek
	//als er geen lege plek is, zeg dat het niet is gelukt
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inv[i])
		{
			this->_inv[i] = m;
			return ;
		}
	}
	std::cout << "inventory is full" << std::endl;

}

void				Character::unequip(int idx)
{
	if (0 <= idx && idx <= 3)
		std::cout << "unequip " << this->_inv[idx] << std::endl;
	//en remove uit de array
}

void				Character::use(int idx, ICharacter &target)
{
	std::cout << idx << std::endl;
	this->_name = target.getName();
//	if (this->AMateria[idx]) //dit pas doen als het compiled, de AMateria methode is nu ook nog gecomment
}
