/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2022/03/02 14:07:25 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include "colors.hpp"
#include <iostream>
#include <sstream>
#include <string>

int	main(int argc, char *argv[])
{
	// geef input door aan 4 functies
	// stoc (string to char)
	// stoi (string to int)
	// stof (string to float)
	// stod (string to double)

	// they output the right line (and return nothing, i think)


	if (argc != 2)
	{
		std::cout << "please give an argument with your program, for example:" << std::endl;
		std::cout << "./convert 42" << std::endl;
	}
	else
	{
		std::cout << COLOR_PINK;

		std::stringstream degree(argv[1]);
		int x = 0;
    	degree >> x;
    	std::cout << "Value of x: " << x << std::endl;

	//////////////////////

		std::cout << COLOR_GREEN;
		Converter conv;
		conv.stoc(argv[1]);
		conv.stoi(argv[1]);
		conv.stof(argv[1]);
		conv.stod(argv[1]);

	}
	return 0;
}
