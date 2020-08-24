/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 22:40:45 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/24 14:42:15 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassContact.hpp"
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void			Contact::addData(int i)
{
	this->index = i;
	std::cout << "Add contact " << i + 1 << std::endl;

	std::cout << "First name: " << std::endl;
	std::getline(std::cin, this->firstname);

	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, this->lastname);
	
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, this->nickname);

	std::cout << "Login: " << std::endl;
	std::getline(std::cin, this->login);

	std::cout << "Postal address: " << std::endl;
	std::getline(std::cin, this->address);

	std::cout << "Email address: " << std::endl;
	std::getline(std::cin, this->email);

	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, this->phonenumber);

	std::cout << "Birthday date: " << std::endl;
	std::getline(std::cin, this->birthday);

	std::cout << "Favorite meal: " << std::endl;
	std::getline(std::cin, this->meal);

	std::cout << "Underwear color: " << std::endl;
	std::getline(std::cin, this->underwear);

	std::cout << "Darkest secret: " << std::endl;
	std::getline(std::cin, this->secret);
}

std::string		Contact::printLine(std::string line)
{
	if (line.length() > 10)
	{
		line.resize(9);
		line += ".";
	}
	return (line);
}

void			Contact::searchTable(void)
{
	this->firstname = this->printLine(this->firstname);
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << this->firstname << "|";
	this->lastname = this->printLine(this->lastname);
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << this->lastname << "|";
	this->nickname = this->printLine(this->nickname);
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << this->nickname << std::endl;
}

void			Contact::printData(void)
{
	
	std::cout << "Contact number " << this->index + 1 << ":" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << "Name:\t\t\t" << this->firstname << std::endl;	
	std::cout << "Surname:\t\t" << this->lastname << std::endl;
	std::cout << "Nickname:\t\t" << this->nickname << std::endl;
	std::cout << "Login:\t\t\t" << this->login << std::endl;
	std::cout << "Postal address:\t\t" << this->address << std::endl;
	std::cout << "Email address:\t\t" << this->email << std::endl;
	std::cout << "Phone number:\t\t" << this->phonenumber << std::endl;
	std::cout << "Birthday date:\t\t" << this->birthday << std::endl;
	std::cout << "Favorite meal:\t\t" << this->meal << std::endl;
	std::cout << "Underwear color:\t" << this->underwear << std::endl;
	std::cout << "Darkest secret:\t\t" << this->secret << std::endl;
}
