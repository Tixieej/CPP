/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:30:15 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/12/14 14:43:08 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy.getTarget(), copy.getSignGrade(), copy.getExecGrade())
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
	return (*this);
}

void				PresidentialPardonForm::sub_execute() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const char			*PresidentialPardonForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char			*PresidentialPardonForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &form)
{
	o << "PresidentialPardonForm with grade " << form.getSignGrade() << std::endl;
	return (o);
}
