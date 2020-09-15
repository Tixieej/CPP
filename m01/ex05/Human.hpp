/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:13:58 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 14:33:59 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"
# include <string>

class Human
{
	public:
		Human();
		~Human();
		std::string	identify();
		const Brain	&getBrain();
	private:
		const		Brain brain;
};

#endif
