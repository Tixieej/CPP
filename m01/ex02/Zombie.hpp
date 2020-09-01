/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:26:09 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 18:02:13 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class Zombie
{
	public:
		Zombie(std::string type, std::string name);
		~Zombie();
	private:
		std::string		type,
						name;
};

#endif
//zombie header
//Make it contain a type, and a name (at least), and add an announce()member function, that will output something along the lines of:<name (type)> Braiiiiiiinnnssss...Whatever you want, really, as long as you output the name and type of theZombie.
