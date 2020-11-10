/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 18:23:40 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/10 18:36:57 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H
# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int	getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int	push(ISpaceMarine*) = 0;
};

#endif
