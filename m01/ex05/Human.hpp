/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:13:58 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/03 18:57:27 by rixt          ########   odam.nl         */
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
		const Brain	getBrain();
	private:
		const		Brain brain;
};

#endif
