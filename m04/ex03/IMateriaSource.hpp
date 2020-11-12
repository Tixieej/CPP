/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 12:18:43 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 12:42:01 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H
# include <string>

class IMateriaSource
{
	public:
		virtual			~IMateriaSource() {}
		virtual void	learnMateria(AMateria*) = 0;
		virtual			AMateria* createMateria(std::string const & type) = 0;
};

#endif
