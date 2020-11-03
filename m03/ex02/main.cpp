/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 09:35:50 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/03 11:16:31 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <stdio.h>	/* NULL */
#include <stdlib.h>	/* srand */
#include <time.h>	/* time */
#include <iostream>

int		main(void)
{
	
	srand (time(NULL));
	FragTrap robot("Robot");
	FragTrap jaap("Jaap");
	FragTrap copy(jaap);
	copy = robot;
	std::cout << std::endl;

	robot.rangedAttack("Peter");
	robot.takeDamage(35);
	robot.takeDamage(4);
	robot.beRepaired(20);
	std::cout << std::endl;

	copy.takeDamage(100);
	copy.takeDamage(100);
	copy.takeDamage(100);
	copy.beRepaired(20);
	std::cout << std::endl;

	robot.meleeAttack("Flip");
	robot.takeDamage(40);
	robot.beRepaired(70);
	std::cout << std::endl;

	robot.vaulthunter_dot_exe("Peter");
	robot.vaulthunter_dot_exe("Jan");
	robot.vaulthunter_dot_exe("Iris");
	robot.vaulthunter_dot_exe("Henk");
	robot.vaulthunter_dot_exe("Rixt");
	robot.rangedAttack("Peter");
	std::cout << std::endl;

	robot.takeDamage(120);
	std::cout << std::endl;

	std::cout << "\t•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•*´¨`*•.¸¸.•" << std::endl;
	std::cout << std::endl;
	
	ScavTrap scav1("Machine");
	ScavTrap scav2("Floris");
	ScavTrap scavCopy(scav2);
	scavCopy = scav1;
	std::cout << std::endl;

	scav1.rangedAttack("Peter");
	scav1.takeDamage(35);
	scav1.beRepaired(20);
	std::cout << std::endl;

	scavCopy.takeDamage(100);
	scavCopy.takeDamage(100);
	scavCopy.takeDamage(100);
	scavCopy.beRepaired(20);
	std::cout << std::endl;

	scav1.meleeAttack("Flip");
	scav1.takeDamage(40);
	scav1.beRepaired(70);
	std::cout << std::endl;

	scav1.challengeNewcomer("Peter");
	scav1.challengeNewcomer("Jan");
	scav1.challengeNewcomer("Iris");
	scav1.challengeNewcomer("Henk");
	scav1.challengeNewcomer("Rixt");
	scav1.challengeNewcomer("Peter");
	std::cout << std::endl;
	
	scav1.takeDamage(120);
	std::cout << std::endl;
	
	return (0);
}
