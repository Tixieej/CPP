/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 18:23:40 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 18:29:30 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int	getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int	push(ISpaceMarine*) = 0;
};

#endif
