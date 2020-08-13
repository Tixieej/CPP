/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 14:35:31 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/11 23:04:52 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassContact.hpp"
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>

void		searchLine(Contact person)
{
	if (person.firstname.length() > 10)
	{
		person.firstname.resize(9);
		std::cout << person.firstname << ".|";
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << person.firstname << "|";
	}
	if (person.lastname.length() > 10)
	{
		person.lastname.resize(9);
		std::cout << person.lastname << ".|";
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << person.lastname << "|";
	}
	if (person.nickname.length() > 10)
	{
		person.nickname.resize(9);
		std::cout << person.nickname << "." << std::endl;
	}
	else
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << person.nickname << std::endl;
	}

}

//int			isCorrect(std::string)
//{

//}

void		pickLine(Contact phonebook[], int max)
{
	std::string		input;
	int				index;

	std::cout << "Pick the number of the person you want to see" << std::endl;
	std::getline(std::cin, input);
	if (isdigit(input[0]) == 0)
	{
		std::cout << "Please input a digit between 1-8" << std::endl;
		return;
	}	
//	index = isCorrect(input);
//	if(index != -1);
//		phonebook[index-1].printData();

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
		searchLine(phonebook[i]);
	}
	pickLine(phonebook, max);
	return;
}

Contact		add(int i)
{
	Contact		persoon;

	persoon.index = i;
	std::cout << "Add contact " << i + 1 << std::endl;

	std::cout << "First name: " << std::endl;
	std::getline(std::cin, persoon.firstname);

	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, persoon.lastname);
	
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, persoon.nickname);

	std::cout << "Login: " << std::endl;
	std::getline(std::cin, persoon.login);

	std::cout << "Postal address: " << std::endl;
	std::getline(std::cin, persoon.address);

	std::cout << "Email address: " << std::endl;
	std::getline(std::cin, persoon.email);

	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, persoon.phonenumber);

	std::cout << "Birthday date: " << std::endl;
	std::getline(std::cin, persoon.birthday);

	std::cout << "Favorite meal: " << std::endl;
	std::getline(std::cin, persoon.meal);

	std::cout << "Underwear color: " << std::endl;
	std::getline(std::cin, persoon.underwear);

	std::cout << "Darkest secret: " << std::endl;
	std::getline(std::cin, persoon.secret);

	return (persoon);
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
				phonebook[i] = add(i);
			i++;
		}
		else if (command == "SEARCH")
			search(phonebook, i);
	}
	return (0);
}
