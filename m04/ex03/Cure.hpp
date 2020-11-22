/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 13:49:17 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/22 11:28:38 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"
# include <string>

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &);
		virtual ~Cure(void);
		Cure				&operator=(Cure const &);
		virtual AMateria	*clone() const; // deze moet wsl hier apart gedefined worden
		virtual void		use(ICharacter &target);
};

#endif
