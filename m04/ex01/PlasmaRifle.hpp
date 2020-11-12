/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 15:43:43 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/12 15:32:13 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
# include "AWeapon.hpp"
# include <string>

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &);
		~PlasmaRifle();
		void				operator=(PlasmaRifle const &);
		virtual void		attack() const;
};

#endif
