/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 17:20:33 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 08:49:43 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H
# include "ISpaceMarine.hpp"

class AssaultTerminator : virtual public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &);
		~AssaultTerminator();
		AssaultTerminator	&operator=(AssaultTerminator const &);


	//	~ISpaceMarine() {}
		ISpaceMarine*		clone() const;
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
};

#endif
