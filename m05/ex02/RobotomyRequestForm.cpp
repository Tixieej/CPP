/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:10:35 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/09/27 14:49:18 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(void)
{
	this->_isSigned = false;

}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, int grade) : _name(name)
{
	this->_isSigned = false;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 0)
		throw GradeTooHighException();
	else
		this->_reqGrade = grade;

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : _name(copy.getName())
{
	this->_reqGrade = copy.getGrade();
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_reqGrade = rhs.getGrade();
	return (*this);
}

std::string			RobotomyRequestForm::getName(void) const
{
	return (this->_name);
}

bool				RobotomyRequestForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

int					RobotomyRequestForm::getGrade(void) const
{
	return (this->_reqGrade);
}

const char			*RobotomyRequestForm::GradeTooHighException::what(void) const throw()
{
		return ("Grade Too High");
}

const char			*RobotomyRequestForm::GradeTooLowException::what(void) const throw()
{
		return ("Grade Too Low");
}

void				RobotomyRequestForm::beSigned(Bureaucrat const &bC)
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

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &form)
{
	o << "RobotomyRequestForm " << form.getName() << " with grade " << form.getGrade() << " is";
	if (!form.getIsSigned())
	{
		o << " not";
	}
	o << " signed.";
	return (o);
}
