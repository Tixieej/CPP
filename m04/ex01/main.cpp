/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:00:07 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 14:33:39 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Bow.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Voldemort.hpp"
#include "Character.hpp"
#include "colors.hpp"
#include <iostream>

int		main(void)
{
	/* main test */
	{
		std::cout << COLOR_YELLOW;
		Character* me = new Character("me");
		std::cout << *me; // me has 40 AP and is unarmed
		Enemy* b = new RadScorpion(); //* click click click *
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me; // me has 40 AP and wields a Plasma Rifle
		me->equip(pf);
		me->attack(b); //me attacks RadScorpion with a Power Fist
		std::cout << *me; //me has 32 AP and wields a Power Fist
		me->equip(pr); //me has 32 AP and wields a Power Fist
		std::cout << *me; //me has 32 AP and wields a Plasma Rifle
		me->attack(b); //me attacks RadScorpion with a Plasma Rifle
		std::cout << *me; //me has 27 AP and wields a Plasma Rifle
		me->attack(b); //me attacks RadScorpion with a Plasma Rifle
		std::cout << *me; //me has 22 AP and wields a Plasma Rifle
		std::cout << COLOR_RESET;
	}
	std::cout << "\t================" << std::endl;
	/* extra tests */
	{
		std::cout << COLOR_BLU;
		AWeapon* plasma = new PlasmaRifle();
		PlasmaRifle plasma2;
		PowerFist power;
		PowerFist power2 = power;

		std::cout << plasma->getName() << std::endl;
		std::cout << plasma->getAPCost() << std::endl;
		std::cout << plasma->getDamage() << std::endl;
		std::cout << power.getName() << std::endl;
		std::cout << power.getAPCost() << std::endl;
		std::cout << power.getDamage() << std::endl;

		plasma->attack();
		power.attack();

		delete(plasma);
		std::cout << COLOR_RESET;
	}
	std::cout << "\t================" << std::endl;
	{
		std::cout << COLOR_ORANGE;
		std::cout << "Test for my own weapon and enemy" << std::endl;
		Character rixt("Rixt");
		AWeapon* bow = new Bow();
		Bow	bow2;
		Voldemort tom;

		std::cout << bow->getName() << std::endl;
		std::cout << bow->getAPCost() << std::endl;
		std::cout << bow->getDamage() << std::endl;

		rixt.equip(bow);
		rixt.attack(&tom);
		rixt.attack(&tom);

		std::cout << rixt;

		bow->attack();

		delete(bow);
		std::cout << COLOR_RESET;
	}
	std::cout << "\t================" << std::endl;
	{
		/* SuperMutants have 3 damage reduction */
		std::cout << COLOR_PURPLE;
		SuperMutant sm;
		Enemy* sm2 = new SuperMutant();	
		std::cout << "HP 1: " << sm.getHP() << std::endl;
		sm.takeDamage(50);
		std::cout << sm.getType() << std::endl;	
		std::cout << "HP 1: " << sm.getHP() << std::endl;
		sm.takeDamage(0);
		std::cout << "HP 1: " << sm.getHP() << std::endl;
		sm.takeDamage(126);
		std::cout << "HP 1: " << sm.getHP() << std::endl;
		
		sm2->takeDamage(3);
		std::cout << "HP 2: "<< sm2->getHP() << std::endl;	
		delete(sm2);
		std::cout << COLOR_RESET;
	}
	std::cout << "\t================" << std::endl;
	{
		/* A copy doesn't take damage if the other does */
		std::cout << COLOR_PINK;
		RadScorpion radA;
		RadScorpion radB;

		radB = radA;
		radA.takeDamage(4);
		std::cout << "HP A: " << radA.getHP() << std::endl;
		std::cout << "HP B: " << radB.getHP() << std::endl;

		RadScorpion radC(radA);
		radA.takeDamage(15);
		std::cout << "HP A: " << radA.getHP() << std::endl;
		std::cout << "HP B: " << radB.getHP() << std::endl;
		std::cout << "HP C: " << radC.getHP() << std::endl;
		std::cout << COLOR_RESET;
	}
	std::cout << "\t================" << std::endl;
	
	return 0;
}
