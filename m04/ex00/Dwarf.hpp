/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dwarf.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 11:31:37 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 11:32:44 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DWARF_H
# define DWARF_H
# include "Victim.hpp"
# include <string>

class Dwarf : public Victim
{
	public:
		Dwarf();
		Dwarf(std::string);
		Dwarf(Dwarf const &);
		virtual ~Dwarf();
		void				operator=(Dwarf const &);
		virtual void		getPolymorphed() const;

	private:
};
	std::ostream			&operator<<(std::ostream &, Dwarf const &);

#endif
