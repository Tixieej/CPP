/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:18:19 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/25 13:44:46 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Fixed::Fixed() : _fracBits( 8 )
{
	std:cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(Fixed number)
{
	std:cout << "Copy constructor called" << std::endl;
	//hier moet de functie hierboven worden aangeroepen of gewoon apart nog een keer _fracBits en _fixedPV vastgesteld worden
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		getRawBits( void ) const
{
	std:cout << "getRawBits member function called" << std::endl;
}

void setRawBits( int const raw )
