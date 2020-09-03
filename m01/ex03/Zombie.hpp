/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 14:26:09 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/03 14:17:02 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string type, std::string name);
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
		void	setType(std::string type);
	private:
		std::string		type,
						name;
};

#endif
