/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/06 20:55:52 by rixt          #+#    #+#                 */
/*   Updated: 2021/12/13 14:22:17 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include <string>
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Form		*callPPF(std::string const &target);
		Form		*callRRF(std::string const &target);
		Form		*callSCF(std::string const &target);
		typedef Form*(Intern::*InternFunction)(std::string const &target);

	public:
		Intern(void);
		Intern(Intern const &);
		virtual ~Intern(void);
		Intern		&operator=(Intern const &);
		Form		*makeForm(std::string name, std::string const target);

		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
	// std::ostream		&operator<<(std::ostream &o);

#endif
