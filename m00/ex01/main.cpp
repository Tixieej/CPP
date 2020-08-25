/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 14:35:31 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/25 14:50:37 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassContact.hpp"
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>

void		pickLine(Contact phonebook[], int max)
{
	std::string		input;
	int				index;
	int				n;

	n = 0;
	std::cout << "Pick the number of the person you want to see" << std::endl;
	std::getline(std::cin, input);
	while (input[n])
	{
		if (isdigit(input[n]) == 0)
		{
			std::cout << "Please input a digit between 1-8" << std::endl;
			return;
		}
		n++;
	}	
	index = atoi(&input[0]);
	if (index <= 8 && index > 0 && index <= max)
		phonebook[index-1].printData();
	else
		std::cout << "This contact does not exist" << std::endl;
	return;
}

void		search(Contact phonebook[], int max)
{
	std::cout << "  index   |first name|last name | nickname " << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "    " << i + 1 << "     |";
		phonebook[i].searchTable();
	}
	pickLine(phonebook, max);
	return;
}

int			main(void)
{
	Contact		phonebook[8];
	std::string	command;
	int			i;

	i = 0;
	while (true)
	{
		std::cout << "Try ADD, SEARCH or EXIT" << std::endl;	
		std::getline (std::cin,command);
		
		if (command == "EXIT")
		{
			std::cout << "Goodbye" << std::endl;
			break;
		}
		else if (command == "ADD")
		{
			if (i > 8)		
				std::cout << "Phonebook is full " << std::endl;
			else
				phonebook[i].addData(i);
			i++;
		}
		else if (command == "SEARCH")
			search(phonebook, i);
	}
	return (0);
}
