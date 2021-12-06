#include "Intern.hpp"
#include <string>
#include <iostream>

Intern::Intern(void)
{
}

Intern::Intern(Intern const &copy) : _name(copy.getName())
{
	this->_grade = copy.getGrade();
}

Intern::~Intern(void)
{
}

Intern			&Intern::operator=(Intern const &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string			Intern::getName(void) const
{
	return (this->_name);
}

int					Intern::getGrade(void) const
{
	return (this->_grade);
}

void				Intern::executeForm(Form const &form)
{
	// TODO: if statements die opvangen wat er niet goed gaat
	if(form.getIsSigned())
	{
		try
		{
			form.execute(*this);
			std::cout << this->_name << " executes form." << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << this->_name << " cannot execute form, because: ";	
			std::cout << e.what() << std::endl;
		}
	
	}
	else
	{
		std::cout << this->_name << " cannot execute form, because: ";
		throw Form::NotSignedException();
	}	
}

std::ostream	&operator<<(std::ostream &o, Intern const &bC)
{
	o << bC.getName() << ", bureacrat grade " << bC.getGrade();
	return (o);
}
