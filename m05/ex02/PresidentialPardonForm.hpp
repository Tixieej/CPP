/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:11:09 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/11/25 18:08:21 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;
//todo: welke functies hier zijn overbodig? de getters?
class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm		&operator=(PresidentialPardonForm const &);
		void						beSigned(Bureaucrat const &bC);
		void						execute(Bureaucrat const & executor);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
	std::ostream		&operator<<(std::ostream &o, PresidentialPardonForm const &form);

#endif
