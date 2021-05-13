/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 15:46:33 by rixt          #+#    #+#                 */
/*   Updated: 2021/05/13 16:29:34 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Hoi.." << std::endl;
	//zet inventory slots op 0
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Hoi, ik ben " << name << std::endl;
	//zet inventory slots op 0
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(Character &copy)//is this deep copy?
{
	*this = copy;
	std::cout << "copy" << std::endl;
}

Character::~Character(void)
{
	//The old Materia of a Character must be deleted. 
	//Same upon destruction of a Character .
	for (int i = 0; i < 4; i++)
		delete this->_inv[i];
	std::cout << this->_name << " dies." << std::endl;

}

Character			&Character::operator=(Character const &rhs)//is this deep assignation?
{
	this->_name = rhs.getName();
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

/*
 * Put item on first empty slot in inventory
 * if inventory full, say that it did not work
 */
void				Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inv[i])
		{
			this->_inv[i] = m;
			std::cout << this->_name << " puts " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "inventory is full" << std::endl;

}

/*
 * remove item from slot idx of inventory
 * the unequip method must not delete Materia
 */
void				Character::unequip(int idx)
{
	if ((0 <= idx && idx <= 3) && this->_inv[idx])
	{
		std::cout << "unequip " << this->_inv[idx]->getType() << " from slot " << idx << std::endl;
		_inv[idx] = NULL;
	}
	else
		std::cout << "There was nothing to remove." << std::endl;
}

/*
 * The use(int, ICharacter&) method will have to use the Materia at the idx slot
 * and pass target as parameter to the AMateria::use method.
*/
void				Character::use(int idx, ICharacter &target)
{
	if ((0 <= idx && idx <= 3) && this->_inv[idx])
	{
		std::cout << this->_name << " ";
		this->_inv[idx]->use(target);
	}
	else
		std::cout << "You can't use that" << std::endl;
	//std::cout << idx << std::endl;
	//this->_name = target.getName();
}
