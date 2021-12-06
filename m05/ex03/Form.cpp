/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:10:35 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/12/06 19:07:33 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>
#include <iostream>

Form::Form(void)
{
	this->_isSigned = false;
}

Form::Form(const std::string target, int signGrade, int execGrade) : _target(target)
{
	this->_isSigned = false;
	if (signGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 0)
		throw GradeTooHighException();
	else
		this->_signGrade = signGrade;

	if (execGrade > 150)
		throw GradeTooLowException();
	else if (execGrade < 0)
		throw GradeTooHighException();
	else
		this->_execGrade = execGrade;

}

Form::Form(Form const &copy) : _target(copy.getTarget())
{
	this->_signGrade = copy.getSignGrade();
	this->_execGrade = copy.getExecGrade();
}

Form::~Form(void)
{
}

Form			&Form::operator=(Form const &rhs)
{
	this->_signGrade = rhs.getSignGrade();
	this->_execGrade = rhs.getExecGrade();
	return (*this);
}

std::string			Form::getTarget(void) const
{
	return (this->_target);
}

bool				Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

int					Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int					Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

void				Form::beSigned(Bureaucrat const &bC)
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

void				Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->_execGrade)
	{
		this->sub_execute();
	}
	else
	{
		throw GradeTooLowException();
	}
}

const char			*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char			*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

const char			*Form::NotSignedException::what(void) const throw()
{
	return ("Form not Signed");
}

std::ostream	&operator<<(std::ostream &o, Form const &form)
{
	o << "Form " << form.getTarget() << " with grade " << form.getSignGrade();
	return (o);
}
