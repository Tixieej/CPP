/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:44:30 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/08/25 13:30:18 by rde-vrie      ########   odam.nl         */
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
		void			ponyOnTheHeap(void);
		void			ponyOnTheStack(void);
	private:
		int				height_cm;
		std::string		race;
		std::string		colour;
		std::string		status;
};

#endif
