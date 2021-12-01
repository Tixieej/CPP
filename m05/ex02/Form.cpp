/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:10:35 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/12/01 17:54:14 by rde-vrie      ########   odam.nl         */
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

// TODO: moet de child copy constructor hiernaar verwijzen (zoja: hoe?), of juist niet?
// TODO: als een signed form gekopieerd wordt, is de kopie dan ook gesigned?
Form::Form(Form const &copy) : _target(copy.getTarget())
{
	this->_signGrade = copy.getSignGrade();
	this->_execGrade = copy.getExecGrade();
}

Form::~Form(void)
{
}

// TODO: als een signed form geoverload wordt, is de kopie dan ook gesigned?
// TODO: target is const, dus die moet niet worden geoverload? of moet target niet const zijn?
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

// TODO: maak aparte getters voor signGrade en execGrade (in Form?)
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

// TODO: ?
void				Form::execute(Bureaucrat const &executor) const
{
	std::cout << "we are in the execute function of Form.cpp" << std::endl;
	if (this->getIsSigned())
	{
		if (executor.getGrade() < this->_execGrade)
		{
			// specific execute function
			//roep subclass aan? heb je die info hier??

		}
		else
		{
			throw GradeTooLowException();
		}

	}
	else
	{
		throw NotSignedException();
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
		return ("Not Signed");
}

std::ostream	&operator<<(std::ostream &o, Form const &form)
{
	o << "Form " << form.getTarget() << " with grade " << form.getSignGrade() << " is";
	if (!form.getIsSigned())
	{
		o << " not";
	}
	o << " signed.";
	return (o);
}
