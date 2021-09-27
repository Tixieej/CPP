/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/09/27 17:26:52 by rde-vrie      ########   odam.nl         */
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

		// Form sign tests
		Form passport("passport", 130);
		Form law("new law", 10);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
		
		high.signForm(passport);
		high.signForm(law);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// Constructor too low grade tests
	//std::cout << COLOR_ORANGE;
	try
	{
		Bureaucrat low("bas", 200);
		std::cout << low << std::endl;

		// Form sign tests
		Form passport("passport", 130);
		Form law("new law", 10);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
		
		low.signForm(passport);
		low.signForm(law);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Good Bureaucrat, Increment tests
	std::cout << COLOR_ORANGE;
	try
	{
		Bureaucrat good("billy", 1);
		std::cout << good << std::endl;


		// Increment tests
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

		// Form sign tests
		std::cout << COLOR_YELLOW;
		Form passport("passport", 130);
		Form law("new law", 10);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
	
		good.signForm(passport);
		good.signForm(law);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Good Bureaucrat, Decrement tests
	std::cout << COLOR_GREEN;
	try
	{
		Bureaucrat good("barney", 149);
		std::cout << good << std::endl;

		// Increment tests
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

		// Form sign tests
		std::cout << COLOR_BLU;
		Form passport("passport", 130);
		Form law("new law", 10);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
		
		good.signForm(passport);
		good.signForm(law);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Good Bureaucrat, Decrement tests
	std::cout << COLOR_PURPLE;
	try
	{
		Bureaucrat middle("Johnny", 100);
		std::cout << middle << std::endl;
		
		// Form sign tests
		std::cout << COLOR_PINK;
		Form passport("passport", 130);
		Form law("new law", 10);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;

		middle.signForm(passport);
		middle.signForm(law);
		std::cout << passport << std::endl;
		std::cout << law << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Destructor tests
	std::cout << COLOR_YELLOW;
	std::cout << COLOR_RESET;
	return 0;
}
