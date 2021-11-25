/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/11/25 18:18:04 by rixt          ########   odam.nl         */
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
	// Constructor too high grade tests
	std::cout << COLOR_PINK;
	Bureaucrat anne("Anne", 55);
	ShrubberyCreationForm scf("target scf");
	RobotomyRequestForm rrf("target rrf");
	PresidentialPardonForm ppf("target ppf");
	// Constructor too low grade tests
	//std::cout << COLOR_ORANGE;
	

	// Good Bureaucrat, Increment tests
	std::cout << COLOR_ORANGE;
	
	// Good Bureaucrat, Decrement tests
	std::cout << COLOR_GREEN;
	
	// Form sign tests
	std::cout << COLOR_BLU;
		

	// Good Bureaucrat, Decrement tests
	std::cout << COLOR_PURPLE;
	
	// Destructor tests
	std::cout << COLOR_YELLOW;
	std::cout << COLOR_RESET;
	return 0;
}
