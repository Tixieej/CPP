/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:44:30 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/08/24 14:51:06 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <string>

class Pony
{
	public:
		Pony(void);
		~Pony(void);
	private:
		int			height_cm;
		std::string	race;
		std::string	colour;
};

#endif
