/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/06 20:55:39 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/13 14:58:20 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>
#include <iostream>

Intern::Intern(void)
{
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern::~Intern(void)
{
}

Intern			&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form		*Intern::makeForm(std::string name, std::string const target)
{
	std::string possible_requests[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	InternFunction formCalls[] = {&Intern::callPPF, &Intern::callRRF, &Intern::callSCF};

	for (int i = 0; i < 3; i++)
	{
		if (name == possible_requests[i])
		{
			Form *requested_form = (this->*formCalls[i])(target);
			std::cout << "Intern creates " << name << " form." << std::endl;
			return requested_form;
		}
	}
	throw FormNotFoundException();
}

// std::ostream	&operator<<(std::ostream &o)
// {
// 	o << "Intern" << std::endl;
// 	return (o);
// }

Form	*Intern::callPPF(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::callRRF(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::callSCF(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

const char			*Intern::FormNotFoundException::what(void) const throw()
{
	return ("Form not found");
}