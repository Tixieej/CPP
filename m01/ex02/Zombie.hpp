/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:26:09 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 11:55:11 by rde-vrie      ########   odam.nl         */
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
		void	announce(void);
	private:
		std::string		type,
						name;
};

#endif
