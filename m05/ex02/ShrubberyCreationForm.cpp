/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 16:50:54 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/11/25 18:29:01 by rixt          ########   odam.nl         */
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
ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_signGrade = rhs.getSignGrade();
	this->_execGrade = rhs.getExecGrade();
	return (*this);
}

void				ShrubberyCreationForm::execute(Bureaucrat const & executor) //const hier??
{
	Form::execute(executor);
	//TODO: 
	std::cout << executor.getName() << " TODO " << std::endl;
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

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &form)
{//TODO: is de info of die signed is nog steeds nodig, want je moet de naam teruggeven bij bijv execute.
	o << "ShrubberyCreationForm with grade " << form.getSignGrade() <<  std::endl;
	return (o);
}
