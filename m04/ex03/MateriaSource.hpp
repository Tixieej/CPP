/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:27:04 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 16:29:41 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &);
		~MateriaSource(void);
		MateriaSource		&operator=(MateriaSource const &);
		void				learnMateria(AMateria*);
		AMateria*			createMateria(std::string const & type);
};

#endif
