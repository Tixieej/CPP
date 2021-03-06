/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 11:53:21 by rixt          #+#    #+#                 */
/*   Updated: 2021/06/05 15:08:35 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include "ICharacter.hpp"
# include <string>
# include <iostream>

class	ICharacter; //forward declaration to stop cyclic includes

class AMateria
{
	protected:
		std::string				_type;
		unsigned int			_xp;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &);
		virtual ~AMateria();
		AMateria				&operator=(AMateria const &);
		std::string const 		&getType() const;
		unsigned int			getXP() const;
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter &target);
};

#endif
