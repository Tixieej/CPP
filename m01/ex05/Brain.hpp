/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:10:00 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 14:28:44 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <string>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string	identify() const;
	private:

};

#endif
