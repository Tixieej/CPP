/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:05:46 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/10 11:12:36 by rixt          ########   odam.nl         */
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
		void				operator=(PowerFist const &);
		virtual void		attack() const;
};

#endif