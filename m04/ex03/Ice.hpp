/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:20:25 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 16:32:02 by rixt          ########   odam.nl         */
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
		~Ice(void);
		Ice	&operator=(Ice const &);
		virtual AMateria*	clone() const; // deze moet wsl hier apart gedefined worden
		virtual void	use(ICharacter &target);
};

#endif
