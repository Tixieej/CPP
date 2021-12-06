/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/06 15:21:53 by rde-vrie      ########   odam.nl         */
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
	srand (time(NULL));
	Bureaucrat anne("Anne", 140);
	Bureaucrat ber("Bertha", 70);
	Bureaucrat car("Carla", 20);
	Bureaucrat dem("Demy", 1);
	ShrubberyCreationForm scf("Home");
	RobotomyRequestForm rrf("Lamp");
	PresidentialPardonForm ppf("Rixt");
	
	std::cout << COLOR_GREEN << "Test: Anne can only sign shrubbery" << std::endl;
	std::cout << COLOR_PINK;
	
	// Shrubbery
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
	
	// Robotomy
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

	// Presidential Pardon
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


	std::cout << COLOR_GREEN << "Test: Bertha can execute shrubbery and sign Robotomy" << std::endl;
	std::cout << COLOR_ORANGE;

	// Shrubbery
	try
	{
		ber.executeForm(scf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// Robotomy
	try
	{
		ber.signForm(rrf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		ber.executeForm(rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Presidential Pardon
	try
	{
		ber.signForm(ppf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		ber.executeForm(ppf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// C
	std::cout << COLOR_GREEN << "Test: Carla can sign everything, but can't execute Presidential" << std::endl;
	std::cout << COLOR_BLU;

	// Shrubbery
	try
	{
		car.executeForm(scf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// Robotomy
	try
	{
		car.executeForm(rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Presidential Pardon
	try
	{
		car.signForm(ppf);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		car.executeForm(ppf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}


	// D
	std::cout << COLOR_GREEN << "Test: Demy can execute everything" << std::endl;
	std::cout << COLOR_PURPLE;

	// Shrubbery
	try
	{
		dem.executeForm(scf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// Robotomy
	try
	{
		dem.executeForm(rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Presidential Pardon
	try
	{
		dem.executeForm(ppf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/* hieronder evt nog andere tests van de evaluator */
	std::cout << COLOR_YELLOW;


	std::cout << COLOR_GREEN << "done" << std::endl;

	std::cout << COLOR_RESET;
	return 0;
}
