/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 18:30:00 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 14:28:14 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "colors.hpp"
#include <iostream>

int main()
{
	std::cout << COLOR_PINK;
	ISpaceMarine	*bob = new TacticalMarine();
	ISpaceMarine	*jim = new AssaultTerminator();

	ISquad			*vlc = new Squad();
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << COLOR_RESET;
	std::cout << "\t•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•" << std::endl;

	// Other tests:
	std::cout << COLOR_RED;
	std::cout << ">>> Creating a new squad with 5 units." << std::endl;
	Squad			*squad1 = new Squad();
	for (int i = 0; i < 5; i++)
	{
		ISpaceMarine	*tmp;
		if (i % 2 == 0)
			tmp = new TacticalMarine();
		else
			tmp = new AssaultTerminator();
		std::cout << ">>> Push returns: " << squad1->push(tmp) << std::endl;
	}
	std::cout << ">>> Copying:" << std::endl;
	Squad			*squad2 = new Squad(*squad1);
	std::cout << ">>> Done copying, deleting the old squad." << std::endl;
	delete squad1;

	std::cout << COLOR_ORANGE;
	std::cout << ">>> Doing a battle cry from a unit of the copied squad." << std::endl;
	squad2->getUnit(2)->battleCry();
	std::cout << ">>> Deleting the copied squad." << std::endl;
	delete squad2;

	std::cout << ">>> Testing assignation with existing squad." << std::endl;
	squad1 = new Squad();
	squad1->push(new TacticalMarine());
	squad1->push(new AssaultTerminator());
	squad2 = new Squad();
	for (int i = 0; i < 5; i++)
	{
		squad2->push(new TacticalMarine());
	}
	std::cout << COLOR_YELLOW;
	std::cout << ">>> Assigning squad 1 to squad 2." << std::endl;
	*squad2 = *squad1;
	std::cout << ">>> Deleting both squads, copies with identical units." << std::endl;
	delete squad1;
	delete squad2;
	bob = 0;
	jim = 0;
	vlc = 0;
	squad1 = 0;
	squad2 = 0;
	// If you want to check for leaks, uncomment the next line
	//while(1);

	std::cout << COLOR_RESET;
	return 0;
}
