/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:12:34 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 14:34:38 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Human::Human()
{
	std::cout << "Hello, fellow human" << std::endl;
}

Human::~Human()
{
	std::cout << "Bye, cruel world" << std::endl;
}

std::string		Human::identify()
{
	return (this->brain.identify());
}

const Brain			&Human::getBrain()
{
	return (this->brain);
}
