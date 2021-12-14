/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/14 14:52:10 by rde-vrie      ########   odam.nl         */
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
	srand(time(NULL));
	Bureaucrat anne("Anne", 140);
	Bureaucrat ber("Bertha", 70);
	Bureaucrat car("Carla", 20);
	Bureaucrat dem("Demy", 1);
	ShrubberyCreationForm scf("Home");
	RobotomyRequestForm rrf("Lamp");
	PresidentialPardonForm ppf("Rixt");

	std::cout << "Grade of Carla: " << car.getGrade() << std::endl;
	std::cout << "Grade of Demy: " << dem.getGrade() << std::endl;

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
	
	// Copy constructor and =-overload
	std::cout << COLOR_GREEN << "Test: Copy constructors and =-overload: Are these copied forms signed?" << std::endl;
	std::cout << COLOR_YELLOW;

	Bureaucrat copy_car(car);
	Bureaucrat copy_dem = dem;
	std::cout << "Grade of Carla copy: " << copy_car.getGrade() << std::endl;
	std::cout << "Grade of Demy copy: " << copy_dem.getGrade() << std::endl;
	
	ShrubberyCreationForm copy_scf(scf);
	RobotomyRequestForm copy_rrf = rrf;
	PresidentialPardonForm copy_ppf(ppf);

	std::cout << "Grades of SCF copy: " << copy_scf.getSignGrade() << ", and: " << copy_scf.getExecGrade() << std::endl;
	std::cout << "Grades of PPF copy: " << copy_ppf.getSignGrade() << ", and: " << copy_ppf.getExecGrade() << std::endl;
	std::cout << "Grades of RRF copy: " << copy_rrf.getSignGrade() << ", and: " << copy_rrf.getExecGrade() << std::endl;

	std::cout << COLOR_ORANGE;
	// Are these forms signed?
	try
	{
		copy_dem.executeForm(copy_scf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		copy_dem.executeForm(copy_rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		copy_dem.executeForm(copy_ppf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Sign and execute one of them
	try
	{
		copy_dem.signForm(copy_rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		copy_car.executeForm(copy_rrf);
		copy_dem.executeForm(copy_rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Bureaucrats op de edge van formulieren
	std::cout << COLOR_GREEN << "Test: Bureaucraat precies sign of execute grade" << std::endl;
	std::cout << COLOR_PINK;
	Bureaucrat edge_sign("Ed", 145);
	Bureaucrat edge_exec("Eddie", 137);

	edge_sign.signForm(scf);
	edge_exec.executeForm(scf);

	std::cout << COLOR_RESET;
	return 0;
}
