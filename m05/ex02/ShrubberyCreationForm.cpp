/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 16:50:54 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/11/24 18:22:18 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
	this->_signGrade = 145;
	this->_execGrade = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy.getTarget(), copy.getSignGrade(), copy.getExecGrade())
{
	// this->_target = copy.getTarget();
	// this->_signGrade = copy.getSignGrade();
	// this->_execGrade = copy.getExecGrade();
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

//TODO:
ShrubberyCreationForm			&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_signGrade = rhs.getSignGrade();
	this->_execGrade = rhs.getExecGrade();
	return (*this);
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

void			ShrubberyCreationForm::execute(Bureaucrat const& executor)
{
	Form::execute(executor);
}

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
