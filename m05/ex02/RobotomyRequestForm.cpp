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
	this->_signGrade = 72;
	this->_execGrade = 45;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy.getTarget(), copy.getSignGrade(), copy.getExecGrade())
{
	// this->_target = copy.getName();
	// this->_signGrade = copy.getSignGrade();
	// this->_execGrade = copy.getExecGrade();
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_signGrade = rhs.getSignGrade();
	this->_execGrade = rhs.getExecGrade();
	return (*this);
}

void				RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	Form::execute(executor);
	std::cout << "* Some drilling noises * ... ";
	//and tell us that <target> has been robotomized successfully 50% of the time. Otherwise, tell us it’s a failure.
	int random = 5;
	if (random == 0)
		std::cout << "It's a failure" << std::endl;
	else
		std::cout << executor.getName() << " has been robotomized successfully." << std::endl;
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
	if (bC.getGrade() < this->_signGrade)
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
	o << "RobotomyRequestForm with grade " << form.getSignGrade() << std::endl;
	return (o);
}
