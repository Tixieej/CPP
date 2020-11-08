/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:43:43 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/08 15:57:30 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
# include "AWeapon.hpp"
# include <string>
# include <iostream>

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(std::string const &, int, int);
		PlasmaRifle(PlasmaRifle const &);
		~PlasmaRifle();
		void				operator=(PlasmaRifle const &);
	//	std::string			getName(void) const;
	//	int					getAPCost() const;
	//	int 				getDamage() const;
//		virtual void		attack() const = 0;

	protected:
//		std::string			_name;
//		int			 		_apcost;
//		int					_damage;
};
//	std::ostream			&operator<<(std::ostream &, PlasmaRifle const &);

#endif
