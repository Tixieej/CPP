/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/06 20:55:39 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/06 21:30:34 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>
#include <iostream>

Intern::Intern(void)
{
}

Intern::Intern(Intern const &copy)
{
}

Intern::~Intern(void)
{
}

Intern			&Intern::operator=(Intern const &rhs)
{
	return (*this);
}

Form		*makeForm(std::string name, std::string target);
{
	// probeer form in name te maken en pointer te returnen, als het niet lukt, ga de else in.
	// het mag kennelijk niet gewoon een if elseif else iets zijn, dus ik weet niet wat ik dan moet doen, maar goed.
	if()
	{
		std::cout << "Intern creates <form>" << std::endl;
		return 
	}
	else
	{
		std::cout << "error message" << std::endl;
	}	
}

std::ostream	&operator<<(std::ostream &o, Intern const &bC)
{
	o << "Intern" << std::endl;
	return (o);
}
