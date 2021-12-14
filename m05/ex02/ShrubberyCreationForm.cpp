/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 16:50:54 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/12/14 14:43:10 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy.getTarget(), copy.getSignGrade(), copy.getExecGrade())
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	return (*this);
}

void				ShrubberyCreationForm::sub_execute() const
{
	std::ofstream file(_target + "_shrubbery");
	file << "                    # #### ####                               %%%%%%%" << std::endl;
    file << "                  ### \\/#|### |/####                     ,'%%\\\\-*%%%%%" << std::endl;
    file << "                 ##\\/#/ \\||/##/_/##/_#                ;%%%%* /  _%%%%   .._" << std::endl;
    file << "               ###  \\/###|/ \\/ # ###                   ,%%#% # %#(_.*%  %%%." << std::endl;
    file << "             ##_\\_#\\_\\## | #/###_/_####              % *%%, ,%%%%*(  '/ #%%" << std::endl;
    file << "            ## #### # \\ #| /  #### ##/##               %^   ,*%%% )\\|,%%*%,_" << std::endl;
    file << "             __#_--###`  |{,###---###-~                   *%   #\\  / #).-^*%%*" << std::endl;
    file << "                       \\ }{                                *% #\\ \\/ / #  *%%*"<< std::endl;
    file << "                        }}{                                   _.) ,/ *%," << std::endl;
    file << "                        }}{                           _________/)#(_____________" << std::endl;
    file << "                        {{}" << std::endl;
    file << "                  , -=-~{ .-^- _" << std::endl;
    file << "                        `}" << std::endl;
    file << "                         {" << std::endl;
	file.close();
}

const char			*ShrubberyCreationForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High");
}

const char			*ShrubberyCreationForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low");
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &form)
{
	o << "ShrubberyCreationForm with grade " << form.getSignGrade() <<  std::endl;
	return (o);
}
