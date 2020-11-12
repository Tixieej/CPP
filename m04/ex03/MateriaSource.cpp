/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 14:23:12 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 15:07:16 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
}

MateriaSource::MateriaSource(Materiasource const &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
		return(*this);
}
