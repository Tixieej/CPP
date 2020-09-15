/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:47:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 13:20:10 by rde-vrie      ########   odam.nl         */
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
		void		attack() const;
		void		setWeapon(Weapon &);
	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
