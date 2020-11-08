/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 10:18:47 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/08 11:26:44 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string, std::string);
		Sorcerer(Sorcerer const &);
		~Sorcerer();
		void			operator=(Sorcerer const &);
		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const &) const;

	private:
		Sorcerer();
		std::string		_name;
		std::string 	_title;
};
	std::ostream		&operator<<(std::ostream &, Sorcerer const &);

#endif
