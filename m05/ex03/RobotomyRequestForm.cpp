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

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy.getTarget(), copy.getSignGrade(), copy.getExecGrade())
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return (*this);
}

void				RobotomyRequestForm::sub_execute() const
{
	std::cout << "* Some drilling noises * ... ";
	int random = rand() % 10;
	if (random >= 5)
		std::cout << "It's a failure" << std::endl;
	else
		std::cout << _target << " has been robotomized successfully." << std::endl;
}

const char			*RobotomyRequestForm::GradeTooHighException::what(void) const throw()
{
		return ("Grade Too High");
}

const char			*RobotomyRequestForm::GradeTooLowException::what(void) const throw()
{
		return ("Grade Too Low");
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &form)
{
	o << "RobotomyRequestForm with grade " << form.getSignGrade() << std::endl;
	return (o);
}
