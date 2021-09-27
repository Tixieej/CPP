/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:10:35 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/09/27 14:16:07 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>
#include <iostream>

Form::Form(void)
{
	this->_isSigned = false;

}

Form::Form(const std::string name, int grade) : _name(name)
{
	this->_isSigned = false;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 0)
		throw GradeTooHighException();
	else
		this->_reqGrade = grade;

}

Form::Form(Form const &copy) : _name(copy.getName())
{
	this->_reqGrade = copy.getGrade();
}

Form::~Form(void)
{
}

Form			&Form::operator=(Form const &rhs)
{
	this->_reqGrade = rhs.getGrade();
	return (*this);
}

std::string			Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

int					Form::getGrade(void) const
{
	return (this->_reqGrade);
}

const char			*Form::GradeTooHighException::what(void) const throw()
{
		return ("Grade Too High");
}

const char			*Form::GradeTooLowException::what(void) const throw()
{
		return ("Grade Too Low");
}

void				Form::beSigned(Bureaucrat const &bC)
{
	if (bC.getGrade() < this->_reqGrade)
	{
		this->_isSigned = true;
	}
	else
	{
		throw GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &o, Form const &form)
{
	o << "Form " << form.getName() << " with grade " << form.getGrade() << " is";
	if (!form.getIsSigned())
	{
		o << " not";
	}
	o << " signed.";
	return (o);
}
