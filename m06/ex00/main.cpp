/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2022/02/02 15:11:01 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "Bureaucrat.hpp"
#include "colors.hpp"
#include <iostream>
#include <sstream>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "please give an argument with your program, for example:" << std::endl;
		std::cout << "./convert 42" << std::endl;
	}
	else
	{
		std::cout << COLOR_PINK;

		stringstream degree(argv[1]);
		int x = 0;
    	degree >> x;
    	cout << "Value of x: " << x;

	//////////////////////

		char *c = (char *) argv[1];
		int *n = (int *) argv[1];
		float *f = (float *) argv[1];
		double *d = (double *) argv[1];

		// dit hieronder moet wsl naar de classes verplaatst worden?
		std::cout << "char: " << *c << std::endl;
		std::cout << "int: " << *n << std::endl;
		std::cout << "float: " << *f << std::endl;
		std::cout << "double: " << *d << std::endl;
	}
	return 0;
}
