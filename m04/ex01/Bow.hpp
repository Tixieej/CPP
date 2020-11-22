/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bow.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 12:54:33 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 12:56:03 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOW_H
# define BOW_H
# include "AWeapon.hpp"
# include <string>

class Bow : public AWeapon
{
	public:
		Bow();
		Bow(Bow const &);
		virtual ~Bow();
		Bow			&operator=(Bow const &);
		virtual void		attack() const;
};

#endif
