/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:18:19 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/27 16:08:40 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.class.hpp"

const int 		Fixed::_fracBits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = (i << Fixed::_fracBits);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(f * (1 << Fixed::_fracBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void			Fixed::operator=(Fixed const &number)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = number.getRawBits();
}

std::ostream	&operator<<(std::ostream &o, Fixed const &number)
{
	o << (float)(number.toFloat());
	return (o);
}

int				Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void 			Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float			Fixed::toFloat(void) const
{
	float number = ((float)this->_fixedPointValue / (1 << Fixed::_fracBits));	
	return (number);
}

int				Fixed::toInt(void) const
{
	return (this->_fixedPointValue << Fixed::_fracBits);	
}
