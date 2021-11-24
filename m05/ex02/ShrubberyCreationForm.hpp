/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 16:50:39 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/11/24 19:23:57 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(ShrubberyCreationForm const &);
		void						beSigned(Bureaucrat const &bC);
		void						execute(Bureaucrat const & executor) const;
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
	std::ostream		&operator<<(std::ostream &o, ShrubberyCreationForm const &form);

#endif
