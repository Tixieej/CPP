/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 11:53:31 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 16:49:17 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H
# include "Victim.hpp"
# include <string>

class Peon : public Victim
{
	public:
		Peon();
		Peon(std::string);
		Peon(Peon const &);
		~Peon();
		void				operator=(Peon const &);
		virtual void		getPolymorphed() const;

	private:
};
	std::ostream			&operator<<(std::ostream &, Peon const &);

#endif
