/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:47:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/12 14:18:40 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void	attack();
		void	setWeapon(Weapon);
	private:
		std::string name;
		Weapon *weapon;
};

#endif
