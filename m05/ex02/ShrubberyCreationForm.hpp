/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 16:50:39 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/09/27 17:24:09 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : Form
{
	private:
		ShrubberyCreationForm(void);
		std::string	const	_name;
		bool				_isSigned;
		int					_signGrade;
		int					_execGrade

	public:
		ShrubberyCreationForm(const std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(ShrubberyCreationForm const &);
		std::string			getName() const;
		bool				getIsSigned() const;
		int					getGrade() const;
		void				beSigned(Bureaucrat const &bC);
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