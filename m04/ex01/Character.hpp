/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 13:22:40 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 11:26:06 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <string>
# include <iostream>

class Character
{
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &);
		virtual ~Character();
		Character		&operator=(Character const &);
		void			recoverAP();
		void			equip(AWeapon *);
		void			attack(Enemy *);
		std::string		getName(void) const;
		int				getAP(void) const;
		AWeapon			*getWeapon(void) const;

	private:
		std::string		_name;
		int				_ap;
		AWeapon			*_weapon;
};

	std::ostream		&operator<<(std::ostream &, Character const &);

#endif
