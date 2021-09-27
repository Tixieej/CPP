/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 16:50:54 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/09/27 17:24:11 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	this->_signGrade = 145;
	this->_execGrade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string home) : _home(home)
{
	this->_signGrade = 145;
	this->_execGrade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : _name(copy.getName())
{
	this->_signGrade = copy.getGrade();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_signGrade = rhs.getGrade();
	return (*this);
}

std::string			ShrubberyCreationForm::getName(void) const
{
	return (this->_name);
}

bool				ShrubberyCreationForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

int					ShrubberyCreationForm::getGrade(void) const
{
	return (this->_signGrade);
}

const char			*ShrubberyCreationForm::GradeTooHighException::what(void) const throw()
{
		return ("Grade Too High");
}

const char			*ShrubberyCreationForm::GradeTooLowException::what(void) const throw()
{
		return ("Grade Too Low");
}

void				ShrubberyCreationForm::beSigned(Bureaucrat const &bC)
{
	if (bC.getGrade() < this->_signGrade)
	{
		this->_isSigned = true;
	}
	else
	{
		throw GradeTooLowException();
	}
}

void			ShrubberyCreationForm::execute(

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &form)
{
	o << "ShrubberyCreationForm " << form.getName() << " with grade " << form.getGrade() << " is";
	if (!form.getIsSigned())
	{
		o << " not";
	}
	o << " signed.";
	return (o);
}
