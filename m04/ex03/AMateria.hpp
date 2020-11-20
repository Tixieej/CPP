/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 11:53:21 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 17:30:24 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include "ICharacter.hpp"
# include <string>

class	ICharacter; //forward declaration to stop cyclic includes

class AMateria
{
	private:
		std::string				_type;
		unsigned int			_xp;

	public:
		AMateria(void);
	//	AMateria(std::string const & type);
		virtual ~AMateria();
		void					operator=(AMateria const &);
		std::string const 		&getType() const; //Returns the materia type
		unsigned int			getXP() const; //Returns the Materia's XP
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter &target);
};

#endif