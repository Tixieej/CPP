/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 14:06:22 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 13:11:25 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "colors.hpp"

int main(void)
{
	/* test main */
	{
		std::cout << COLOR_GREEN;
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << COLOR_RESET;
	std::cout << "\t•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•" << std::endl;
	/* extra tests */
	{
		/* constructors */
		std::cout << COLOR_BLUE;
		Sorcerer	gandalf("Gandalf", "the Grey");
		Sorcerer	merlin = gandalf;
		Sorcerer	dumbledore(merlin);
		std::cout << std::endl;

		Victim		bert("Bert");
		Victim		frans = bert;
		Victim		ans(frans);
		std::cout << std::endl;

		Peon		peter("Peter");
		Victim*		vic = new Peon("Vic");
		Peon		person = peter;
		Peon		paula(person);

		/* operators */
		std::cout << COLOR_PURPLE;
		std::cout << std::endl << gandalf << bert << merlin << paula << *vic << std::endl;

		/* functions */
		std::cout << COLOR_PINK;
		merlin.polymorph(bert);
		gandalf.polymorph(frans);
		dumbledore.polymorph(ans);
		merlin.polymorph(paula);
		gandalf.polymorph(person);
		dumbledore.polymorph(peter);
		vic->getName();

		/* destructors */
		std::cout << COLOR_YELLOW;
		delete(vic);
		std::cout << std::endl;
		std::cout << COLOR_RESET;
	}
	return 0;
}
