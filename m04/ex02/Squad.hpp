/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 18:12:55 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 19:47:44 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"

class Squad
{
	public:
		Squad();
		Squad(Squad const &);
		~Squad();
		void			operator=(Squad const &);
//		virtual ~ISquad() {}
//		virtual int getCount() const;
		
	protected:
	private:
};

#endif
