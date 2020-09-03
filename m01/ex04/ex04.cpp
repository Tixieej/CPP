/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 14:40:10 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 16:07:01 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *ptr = &s;
	std::string &ref = s;

	std::cout << *ptr << std::endl << ref << std::endl;
	return (0);
}
