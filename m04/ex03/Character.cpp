/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 15:46:33 by rixt          #+#    #+#                 */
/*   Updated: 2021/06/05 15:09:45 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Hi.." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Hi, I am " << name << "." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
}

Character::Character(Character &to_copy)
{
	this->_name = to_copy.getName();
	std::cout << "Hi, I am a copy of " << this->_name << "." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (to_copy._inv[i])
			this->_inv[i] = to_copy._inv[i]->clone();
	}
}

/*
 * The old Materia of a Character must be deleted. 
 * Same upon destruction of a Character.
 */
Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete this->_inv[i];
	std::cout << this->_name << " dies." << std::endl;
}

Character	&Character::operator=(Character const &rhs)
{	
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inv[i])
			this->_inv[i] = rhs._inv[i]->clone();
	}
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
void	Character::equip(AMateria* mat)
{
	if (mat == 0)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] == mat)
		{
			std::cout << this->_name << " already has this equipped in slot " << i << "." << std::endl;
			return ;
		}
		else if(!this->_inv[i])
		{
			this->_inv[i] = mat;
			std::cout << this->_name << " puts " << mat->getType() << " in slot " << i << "." << std::endl;
			return ;
		}
	}
	std::cout << this->_name << "'s inventory is full." << std::endl;
}

/*
 * remove item from slot idx of inventory
 * the unequip method must not delete Materia
 */
void				Character::unequip(int idx)
{
	if ((0 <= idx && idx <= 3) && this->_inv[idx])
	{
		std::cout << this->_name << " unequips " << this->_inv[idx]->getType() << " from slot " << idx << "." << std::endl;
		_inv[idx] = 0;
	}
	else
		std::cout << "There was nothing to remove from slot " << idx << "." << std::endl;
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
		std::cout << this->_name << ", you can't use that." << std::endl;
}
