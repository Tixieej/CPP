/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 14:01:18 by rde-vrie      #+#    #+#                 */
/*   Updated: 2022/03/02 14:05:54 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <string>
#include <iostream>

Converter::Converter()
{
}

Converter::Converter(Converter const &copy)
{
	*this = copy;
}

Converter::~Converter()
{
}

Converter			&Converter::operator=(Converter const &rhs)
{
	(void)rhs;
	return (*this);
}

/* Return impossible als er in de string s meerdere non-number-characters zitten.
** Uitzonderingen:
**   - eerste char is '+', '-'
**   - laatste char is 'f'
**   - een '.'
*/
void				Converter::stoc(std::string s)
{
	std::cout << "char: ";
	// if impossible:
	if(!isConvertable(s))
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		// else: convert the string to a char
		char c = std::stoi(s);
		if (!c) {
			std::cout << "Non displayable" << std::endl;
		} else {
			std::cout << "'" << c << "'" << std::endl;
		}
	}
}

void				Converter::stoi(std::string s)
{
	std::cout << "int: ";
	std::cout << std::stoi(s) << std::endl;
}


/* Return nan als er in de string s een character zit dat geen cijfer is
** Uitzonderingen:
**   - eerste char is '+', '-'
**   - laatste char is 'f'
**   - een '.'
*/
void				Converter::stof(std::string s)
{
	std::cout << "float: ";
	
	// if impossible:
	if (false) 
	{
		std::cout << "nan";
	}
	else
	{
		std::cout << std::stof(s);
	}

	std::cout << "f" << std::endl;
}

/* Return nan als er in de string s een character zit dat geen cijfer is
** Uitzonderingen:
**   - eerste char is '+', '-'
**   - laatste char is 'f'
**   - een '.'
*/
void				Converter::stod(std::string s)
{
	std::cout << "double: ";
	std::cout << std::stod(s) << std::endl;
}


// help function for char and int
bool				Converter::isConvertable(std::string s)
{
	// return false if:
	// 

	(void)s;
	return true;
}




std::ostream	&operator<<(std::ostream &o, Converter const &conv)
{
	(void)conv;
	o << "output operator." << std::endl;
	return (o);
}

