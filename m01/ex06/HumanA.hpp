/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 22:47:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 13:20:08 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"
# include <string>

class HumanA
{
	public:
		HumanA(std::string, Weapon &);
		~HumanA();
		void		attack() const;
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
