/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:18:19 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/26 19:42:49 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.class.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(Fixed const &number)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = number.getRawBits();
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = i;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	//je moet de mantissa bitshiften
	//bitshiftwaarde = 119 - e, maar hoe haal ik de e-waarde uit de float?
	this->_fixedPointValue = roundf(f);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(Fixed const &number)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = number.getRawBits();
}

std::ostream	&operator<<(std::ostream &o, Fixed const &number)
{
	o << number.getRawBits();
	return o;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void 	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

//float	Fixed::toFloat( void ) const
//{

//}

//int		Fixed::toInt( void ) const
//{
	
//}
