/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 18:19:36 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/12 11:45:44 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad() : ISquad()
{
	this->_squadCount = 0;
	this->_squadList = NULL;
}

Squad::Squad(Squad const &copy)
{
	this->_squadCount = 0;
	*this = copy;
}

Squad::~Squad()
{
	if (this->_squadCount > 0)
		this->deleteUnits();
}

Squad				&Squad::operator=(Squad const &src)
{
	// a = b, this = a, src = b
	// delete old units from a
	if (this->_squadCount > 0)
		this->deleteUnits();
	// make new squadlist with right amount of marines
	this->_squadCount = src._squadCount;
	this->_squadList = new ISpaceMarine*[this->_squadCount];
	// copy all units from src to a
	for (int i = 0; i < src.getCount(); i++)
		this->_squadList[i] = src.getUnit(i)->clone();
	return (*this);
}

int					Squad::getCount() const
{
	return (this->_squadCount);
}

ISpaceMarine		*Squad::getUnit(int nbr) const
{
	if (nbr > this->_squadCount)
		return (NULL);
	return (this->_squadList[nbr]);
}

int					Squad::push(ISpaceMarine *newMarine)
{
	if (newMarine == NULL)
		return (this->_squadCount);
	for (int i = 0; i < this->_squadCount; i++) 
	{
		if (newMarine == this->_squadList[i])
			return (this->_squadCount);
	}
	this->_squadCount++;
	ISpaceMarine	**newSquad = new ISpaceMarine*[this->_squadCount];
	// copy old squad to new squad
	for (int i = 0; i < this->_squadCount - 1; i++)
		newSquad[i] = this->_squadList[i];
	// delete old squad
	delete[] this->_squadList;
	// add newMarine
	newSquad[this->_squadCount - 1] = newMarine;
	this->_squadList = newSquad;
	return (this->_squadCount);
}

void				Squad::deleteUnits(void)
{
	for (int i = 0; i < this->_squadCount; i++)
		delete this->_squadList[i];
	delete this->_squadList;
}
