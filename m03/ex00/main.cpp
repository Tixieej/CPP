/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 09:35:50 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/02 09:47:15 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
	
	return (0);
}
