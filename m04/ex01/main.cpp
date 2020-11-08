/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:00:07 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/08 15:57:34 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int		main(void)
{
	AWeapon wapen;
	AWeapon wappie("rifle", 5, 25);
	AWeapon* pr = new PlasmaRifle();
	PlasmaRifle pr2;
	std::cout << pr->getName() << std::endl;
	return 0;
}
