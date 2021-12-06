/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/06 20:55:52 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/06 21:02:36 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include <string>
# include <iostream>
# include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &);
		virtual ~Intern(void);
		Intern		&operator=(Intern const &);
		Form		*makeForm(std::string name, std::string target);
};
	std::ostream		&operator<<(std::ostream &o, Intern const &bC);

#endif
