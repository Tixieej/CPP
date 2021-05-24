/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:21:00 by rixt          #+#    #+#                 */
/*   Updated: 2021/05/24 14:45:17 by rde-vrie      ########   odam.nl         */
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
	// Character Constructor tests?
	std::cout << COLOR_PURPLE;
	Character* me = new Character("Rixt");
	Character* remco = new Character("Remco");
	Character* copy_rixt(me);
//	Character* copy_remco = new Character(*remco);
	//todo?: test if inventory is empty
	
	// Materia Constructor tests
	Ice* ijsje = new Ice();
	Ice* two = new Ice();
	Cure* three = new Cure();
	Ice* four = new Ice();
	Ice* five = new Ice();
//	Cure* copy(three);//geen deep??? waarom abort?
//	Ice* copy2 = new Ice(four);

	std::cout << COLOR_YELLOW;
	// ICharacter tests
	me->use(0, *remco);
	me->equip(ijsje);
	me->equip(ijsje);
	me->unequip(2);
	me->equip(two);
	me->equip(three);
	me->equip(four);
	me->equip(five);

	//Cure vaccine; waarom kan ik deze niet equippen?
	Cure* vaccine = new Cure();
	remco->equip(vaccine);
	Character* copy_remco = new Character(*remco);//sefault in copy const of character
	copy_remco->unequip(0);
	remco->unequip(0);

	// Deep copy check:
	copy_rixt->equip(five);
	me->unequip(3);
//	me->equip(copy);
	me->equip(five);

	Ice *six = five->clone();
	me->equip(six);

	std::cout << COLOR_BLU;
	six->use(*remco);
	// check if XP of three gets higher if remco uses the copy
	std::cout << "check XP: " << three->getXP() << std::endl;
	three->use(*remco);
	std::cout << "check XP: " << three->getXP() << std::endl;
	three->use(*remco);
	std::cout << "check XP: " << three->getXP() << std::endl;
	three->use(*remco);
	std::cout << "check XP: " << three->getXP() << std::endl;

	std::cout << COLOR_ORANGE;
	me->use(2, *remco);
	std::cout << "check XP: " << three->getXP() << std::endl;
	me->use(2, *remco);
	std::cout << "check XP: " << three->getXP() << std::endl;
	me->use(2, *remco);
	std::cout << "check XP: " << three->getXP() << std::endl;
	me->use(2, *remco);
	std::cout << "check XP: " << three->getXP() << std::endl;
	me->use(2, *remco);
	
	six->use(*remco);
	//three was equipped in slot 2 of inv of me:
	three->use(*remco);
	std::cout << "check XP: " << three->getXP() << std::endl;




	// IMateriaSource tests
	std::cout << COLOR_GREEN;
	// bla


	// deletes
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
