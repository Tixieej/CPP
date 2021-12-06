/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/05 15:30:25 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/12/06 18:44:56 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		Bureaucrat(void);
		std::string	const	_name;
		int					_grade;

	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &);
		virtual ~Bureaucrat(void);
		Bureaucrat			&operator=(Bureaucrat const &);
		std::string			getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();
		void				signForm(Form &form);
		void				executeForm(Form const &form);
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
	std::ostream		&operator<<(std::ostream &o, Bureaucrat const &bC);

#endif
