/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:10:35 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/09/27 14:53:09 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void)
{
	this->_signGrade = 25;
	this->_execGrade = 5;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, int grade) : _name(name)
{
	this->_isSigned = false;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 0)
		throw GradeTooHighException();
	else
		this->_reqGrade = grade;

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : _name(copy.getName())
{
	this->_reqGrade = copy.getGrade();
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_reqGrade = rhs.getGrade();
	return (*this);
}

std::string			PresidentialPardonForm::getName(void) const
{
	return (this->_name);
}

bool				PresidentialPardonForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

int					PresidentialPardonForm::getGrade(void) const
{
	return (this->_reqGrade);
}

void				execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	//TODO: wat is target? is dat de naam van de bureaucraat?
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const char			*PresidentialPardonForm::GradeTooHighException::what(void) const throw()
{
		return ("Grade Too High");
}

const char			*PresidentialPardonForm::GradeTooLowException::what(void) const throw()
{
		return ("Grade Too Low");
}

void				PresidentialPardonForm::beSigned(Bureaucrat const &bC)
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

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &form)
{
	o << "PresidentialPardonForm " << form.getName() << " with grade " << form.getGrade() << " is";
	if (!form.getIsSigned())
	{
		o << " not";
	}
	o << " signed.";
	return (o);
}
