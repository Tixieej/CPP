/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 10:51:03 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/08 14:02:48 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main(void)
{
	/* constructors */
	Sorcerer	gandalf("Gandalf", "the Grey");
	Sorcerer	merlin = gandalf;
	Sorcerer	dumbledore(merlin);
	std::cout << std::endl;

	Victim		bert("Bert");
	Victim		frans = bert;
	Victim		ans(frans);
	std::cout << std::endl;

	Peon		peter("Peter");
	Peon		person = peter;
	Peon		paula(person);

	/* operators */
	std::cout << std::endl << gandalf << bert << std::endl;

	/* functions */
	merlin.polymorph(bert);
	merlin.polymorph(paula);

	/* destructors */
	std::cout << std::endl;

	return (0);
}
