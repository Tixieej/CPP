/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 18:12:55 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/10 18:25:26 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
		Squad();
		Squad(Squad const &);
		virtual					~Squad();
		Squad&					operator=(Squad const &);


		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int						push(ISpaceMarine*);


	//	static int		getCount(void) const;
	protected:
	private:
	//	static int		_squadCount;
};

#endif
