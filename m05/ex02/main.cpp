/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/11/26 22:03:49 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "colors.hpp"
#include <iostream>

int	main()
{
	// Constructors
	std::cout << COLOR_PINK;
	Bureaucrat anne("Anne", 55);
	ShrubberyCreationForm scf("target scf");
	RobotomyRequestForm rrf("target rrf");
	PresidentialPardonForm ppf("target ppf");
	// Constructor too low grade tests
	//std::cout << COLOR_ORANGE;

	try
	{
		anne.executeForm(scf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		anne.signForm(scf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		anne.executeForm(scf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	// Good Bureaucrat, Increment tests
	std::cout << COLOR_ORANGE;
	
	try
	{
		anne.executeForm(rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		anne.signForm(rrf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		anne.executeForm(rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	// Good Bureaucrat, Decrement tests
	std::cout << COLOR_GREEN;
	
	try
	{
		anne.executeForm(ppf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		anne.signForm(ppf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		anne.executeForm(ppf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	// Form sign tests
	std::cout << COLOR_BLU;
		

	// Good Bureaucrat, Decrement tests
	std::cout << COLOR_PURPLE;
	
	// Destructor tests
	std::cout << COLOR_YELLOW << "done" << std::endl;

	std::cout << COLOR_RESET;
	return 0;
}
