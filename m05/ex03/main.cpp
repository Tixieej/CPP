/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/14 15:18:31 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "colors.hpp"
#include <iostream>

int	main()
{
	// Constructors
	srand (time(NULL));
	Bureaucrat dem("Demy", 1);
	Intern someRandomIntern;
	Form *scf;
	Form *ppf;
	Form *rrf;

	std::cout << COLOR_GREEN << "Test: Intern makes 3 forms" << std::endl;
	std::cout << COLOR_PINK;
	
	try
	{
		scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		ppf = someRandomIntern.makeForm("presidential pardon", "You");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// invalid argument
	try
	{
		rrf = someRandomIntern.makeForm("request for robotomy", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << COLOR_GREEN << "Test: Bureaucrat signs and executes the forms" << std::endl;
	std::cout << COLOR_BLU;

	dem.signForm(*scf);
	dem.executeForm(*scf);
	dem.signForm(*ppf);
	dem.executeForm(*ppf);
	dem.signForm(*rrf);
	dem.executeForm(*rrf);

	std::cout << COLOR_GREEN << "Test: getters" << std::endl;
	std::cout << COLOR_PURPLE;

	std::cout << "Shrubbery signgrade: " << scf->getSignGrade() << std::endl;
	std::cout << "Presidential isSigned: " << ppf->getIsSigned() << std::endl;
	std::cout << "Robotomy executegrade: " << rrf->getExecGrade() << std::endl;

	std::cout << COLOR_GREEN << "done" << std::endl;
	std::cout << COLOR_RESET;
	return 0;
}
