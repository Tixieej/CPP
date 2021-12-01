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

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(target, 25, 5)
{
}

// TODO: hier denk ik niet de copy van Form aanroepen?
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy.getTarget(), copy.getSignGrade(), copy.getExecGrade())
{
	// this->_signGrade = copy.getSignGrade();
	// this->_execGrade = copy.getExecGrade();
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

//TODO:
PresidentialPardonForm			&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_signGrade = rhs.getSignGrade();
	this->_execGrade = rhs.getExecGrade();
	return (*this);
}

void				PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	//Form::execute(executor);
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
	if (bC.getGrade() < this->_signGrade)
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
	o << "PresidentialPardonForm with grade " << form.getSignGrade() << std::endl;
	return (o);
}
