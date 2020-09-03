/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:08:22 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/03 18:50:56 by rixt          ########   odam.nl         */
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
  stream << "0x" 
         << std::setw(sizeof(uint64_t)) 
         << std::hex << (uint64_t)this;
  return (stream.str());

}
