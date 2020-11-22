/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 11:51:49 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 13:51:27 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde horde(-4);
	horde.announce();
	return (0);
}
