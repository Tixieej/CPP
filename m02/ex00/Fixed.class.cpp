/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:18:19 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/24 12:58:37 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Fixed::Fixed()
{
	this.fixedPointValue = 0;
}

Fixed::~Fixed()
{
	std::cout << "deleted" << std::endl;
}

int		getRawBits( void ) const
{
}

void setRawBits( int const raw )
