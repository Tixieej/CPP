/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:44:30 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 19:00:07 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <string>

class Pony
{
	public:
		Pony(std::string name, int height);
		~Pony(void);
		void			feed();
		void			run(int laps);
	private:
		int				height_cm,
						energy;
		std::string		name,
						race,
						colour;

};

#endif
