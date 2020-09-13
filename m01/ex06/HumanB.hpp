/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:47:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/13 13:12:11 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <string>

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB();
		void		attack();
		void		setWeapon(Weapon &);
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif
