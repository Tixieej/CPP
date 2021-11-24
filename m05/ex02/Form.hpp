/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:11:09 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/11/24 17:56:13 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		Form(void);
		std::string	const	_target;
		bool				_isSigned;
		int					_signGrade;
		int					_execGrade;

	public:
		Form(const std::string target, int signGrade, int execGrade);
		Form(Form const &);
		virtual ~Form(void);
		Form			&operator=(Form const &);
		std::string			getTarget() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat const &bC);
		void				execute(Bureaucrat const &executor);
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
		class NotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
	std::ostream		&operator<<(std::ostream &o, Form const &form);

#endif
