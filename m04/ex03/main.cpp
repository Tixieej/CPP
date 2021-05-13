/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/05/13 16:40:07 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "colors.hpp"
#include <iostream>


/*int	subject_main(void)
{
	std::cout << COLOR_YELLOW;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	std::cout << COLOR_RESET;
	return 0;
}*/

int	main()
{
	std::cout << COLOR_BLU;
	ICharacter* me = new Character("Rixt");
	ICharacter* remco = new Character("Remco");
	//is inventory in begin wel leeg?
	Ice* ijsje = new Ice();
	Ice* two = new Ice();
	Cure* three = new Cure();
	Ice* four = new Ice();
	Ice* five = new Ice();

	me->equip(ijsje);
	me->unequip(2);
	me->equip(two);
	me->equip(three);
	me->equip(four);
	me->equip(five);
	me->unequip(3);
	me->equip(five);

	Ice *six = five->clone();
	me->equip(six);

	six->use(*remco);
	three->use(*remco);
	three->use(*remco);
	three->use(*remco);
	me->use(2, *remco);
	me->use(2, *remco);
	me->use(2, *remco);
	me->use(2, *remco);
	me->use(2, *remco);
	six->use(*remco);

	std::cout << COLOR_RESET;

	//bla

	std::cout << COLOR_PINK;

	delete me;
	delete remco;
//	delete ijsje; // deze kun je niet deleten nadat je me en remco hebt gedeleted, maar misschien moet dat wel kunnen omdat je een deep copy maakt, maar misschien moet je in dit geval geen deep copy maken? even uitzoeken.
	//delete two;
	//delete three;
	//delete four;
	//delete five;
	delete six;

	std::cout << COLOR_RESET;
	// subject_main();
	return 0;
}
