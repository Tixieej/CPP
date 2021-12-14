/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/14 13:50:25 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colors.hpp"
#include <iostream>

int	main()
{
	std::cout << COLOR_PINK;
	// Good Bureaucrat, Increment tests
	try
	{
		Bureaucrat good("billy", 2);
		std::cout << good << std::endl;

		// Form sign tests
		std::cout << COLOR_ORANGE;
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
	std::cout << COLOR_YELLOW;
	try
	{
		Bureaucrat good("barney", 149);
		std::cout << good << std::endl;

		// Form sign tests
		std::cout << COLOR_GREEN;
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
	std::cout << COLOR_BLU;
	try
	{
		Bureaucrat middle("Johnny", 100);
		std::cout << middle << std::endl;
		
		// Form sign tests
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

	// Bureaucrats and Forms on the edge
	std::cout << COLOR_PURPLE;
	try
	{
		Bureaucrat edge_high("Ed", 1);
		Bureaucrat edge_low("Eddie", 150);
		std::cout << "Grade of Ed: " << edge_high.getGrade();
		std::cout << ". Grade of Eddie: " << edge_low.getGrade() << std::endl;

		Form law("new law", 1);
		Form passport("passport", 150);
		std::cout << "Grade of law: " << law.getGrade();
		std::cout << ". Grade of passport: " << passport.getGrade() << std::endl;

		edge_low.signForm(passport);
		edge_high.signForm(law);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Forms too high and too low
	std::cout << COLOR_PINK;
	try
	{
		Form law("new law", 0);
		std::cout << "Required grade of law: " << law.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form passport("passport", 151);
		std::cout << "Required grade of passport: " << passport.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << COLOR_RESET;
	return 0;
}
