/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:08:22 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 14:34:12 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

Brain::Brain()
{
	std::cout << "Brain exists" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is gone" << std::endl;
}

std::string		Brain::identify() const
{
  std::stringstream stream;
  stream << this;
  return (stream.str());
}
