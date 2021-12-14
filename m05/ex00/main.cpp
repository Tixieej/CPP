/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/14 13:38:45 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colors.hpp"
#include <iostream>

int	main()
{
	// Constructor too high grade tests
	std::cout << COLOR_PINK;
	try
	{
		Bureaucrat high("bob", -2);
		std::cout << high << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// Constructor too low grade tests
	std::cout << COLOR_ORANGE;
	try
	{
		Bureaucrat low("bas", 200);
		std::cout << low << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Good Bureaucrat, Increment tests
	std::cout << COLOR_YELLOW;
	try
	{
		Bureaucrat good("billy", 2);
		std::cout << good << std::endl;

		// Increment tests
		std::cout << COLOR_GREEN;
		try
		{
			good.increment();
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << good << std::endl;
		try
		{
			good.increment();
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << good << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Good Bureaucrat, Decrement tests
	std::cout << COLOR_BLU;
	try
	{
		Bureaucrat good("barney", 149);
		std::cout << good << std::endl;

		// Increment tests
		std::cout << COLOR_PURPLE;
		try
		{
			good.decrement();
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << good << std::endl;
		try
		{
			good.decrement();
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		good.getGrade();
		std::cout << good << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << COLOR_RESET;
	return 0;
}
