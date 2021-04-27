/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:20:25 by rixt          #+#    #+#                 */
/*   Updated: 2021/04/27 11:58:56 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"
# include <string>

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &);
		virtual ~Ice(void);
		Ice	&operator=(Ice const &);
		virtual Ice*	clone() const; // deze moet wsl hier apart gedefined worden
		virtual void	use(ICharacter &target);
};

#endif
