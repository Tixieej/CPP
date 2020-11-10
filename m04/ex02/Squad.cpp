/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 18:19:36 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/10 18:40:03 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad() : ISquad()
{
	std::cout << "test hallo squad" << std::endl;
}

Squad::Squad(Squad const &copy)
{
	*this = copy;
}

Squad::~Squad()
{
	std::cout << "destruct squad" << std::endl;
}

Squad				&Squad::operator=(Squad const &src)
{
	std::cout << "= operator" << std::endl;
	return (*this);
}

int					Squad::getCount() const
{
	std::cout << "count" << std::endl;
	return (8);
}

ISpaceMarine		*Squad::getUnit(int nbr) const
{
	ISpaceMarine *test;
	return (test);
}

int					Squad::push(ISpaceMarine *)
{
	std::cout << "push" << std::endl;
	return (5);
}
