/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 09:01:57 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/12/14 13:39:11 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy.getName())
{
	this->_grade = copy.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string			Bureaucrat::getName(void) const

{
	return (this->_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const char			*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char			*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

void				Bureaucrat::increment()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
		(this->_grade)--;
}

void				Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
		(this->_grade)++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &bC)
{
	o << bC.getName() << ", bureaucrat grade " << bC.getGrade();
	return (o);
}
