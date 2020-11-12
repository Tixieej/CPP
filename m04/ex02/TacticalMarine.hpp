/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 10:58:58 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 08:46:34 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H
# include "ISpaceMarine.hpp"

class TacticalMarine : virtual public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &);
		~TacticalMarine();
		TacticalMarine	&operator=(TacticalMarine const &);


//		~ISpaceMarine() {}
		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
