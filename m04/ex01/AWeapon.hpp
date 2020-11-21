/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:01:30 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 14:11:47 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H
# include <string>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(std::string const &, int, int);
		AWeapon(AWeapon const &);
		virtual ~AWeapon();
		AWeapon				&operator=(AWeapon const &);
		std::string			getName(void) const;
		int					getAPCost() const;
		int 				getDamage() const;
		virtual void		attack() const = 0;

	protected:
		std::string			_name;
		int			 		_apcost;
		int					_damage;
};

#endif
