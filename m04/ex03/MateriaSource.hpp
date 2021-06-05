/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:27:04 by rixt          #+#    #+#                 */
/*   Updated: 2021/06/05 15:12:17 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria			*_learnedMateria[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &);
		virtual ~MateriaSource(void);
		MateriaSource		&operator=(MateriaSource const &);
		void				learnMateria(AMateria*);
		AMateria*			createMateria(std::string const & type);
};

#endif
