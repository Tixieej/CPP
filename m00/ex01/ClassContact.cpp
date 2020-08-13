/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClassContact.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 22:40:45 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/11 23:00:12 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassContact.hpp"
#include <string>

Contact::Contact(void)
{
//	std::cout << "instance aangemaakt" << std::endl;
	Contact::_nbInst++;
	return;
}

Contact::~Contact(void)
{
//	std::cout << "destructor" << std::endl;
	Contact::_nbInst--;
	return;
}

void	Contact::printData(void)
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
