/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:01:30 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/12 15:10:55 by rixt          ########   odam.nl         */
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
		void				operator=(AWeapon const &);
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
