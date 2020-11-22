/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 10:50:18 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 11:25:25 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H
# include <string>

class Victim
{
	public:
		Victim();
		Victim(std::string);
		Victim(Victim const &);
		virtual ~Victim();
		void				operator=(Victim const &);
		std::string			getName(void) const;
		virtual void		getPolymorphed(void) const;

	protected:
		std::string			_name;
};
	std::ostream			&operator<<(std::ostream &, Victim const &);

#endif
