/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:27:14 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 19:10:33 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//see the class file

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include "Zombie.hpp"
# include <string>

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string const type);
		Zombie*	newZombie(std::string const name);
	private:
		std::string	type;

};

#endif
