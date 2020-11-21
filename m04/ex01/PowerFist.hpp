/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:05:46 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/21 14:09:36 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H
# include "AWeapon.hpp"
# include <string>

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist const &);
		~PowerFist();
		PowerFist			&operator=(PowerFist const &);
		virtual void		attack() const;
};

#endif
