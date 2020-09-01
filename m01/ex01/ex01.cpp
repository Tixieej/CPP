/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:04:31 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 14:24:41 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	for (int i = 0; i < 15; i++)
		memoryLeak();
	while(1);
}
