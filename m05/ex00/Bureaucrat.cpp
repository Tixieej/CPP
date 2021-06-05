/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/05 15:30:34 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/06/05 17:07:23 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_type = rhs.getType();
	this->_xp = rhs.getXP();
	return (*this);
}

std::string const	&Bureaucrat::GetName(void) const
{
	return (this->_name);
}

int const			&Bureaucrat::GetGrade(void) const
{
	return (this->_grade);
}

std::string			Bureaucrat::GradeTooHighException(int grade)
{

}

std::string			Bureaucrat::GradeTooLowException(int grade)
{

}

void				Bureaucrat::increment()
{
	(this->_grade)--;
}

void				Bureaucrat::increment()
{
	(this->_grade)++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &bC)
{
	o << bC.getName();
	return (o);
}
