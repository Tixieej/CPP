/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 13:49:17 by rixt          #+#    #+#                 */
/*   Updated: 2021/06/05 15:10:18 by rde-vrie      ########   odam.nl         */
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
		virtual Cure	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
