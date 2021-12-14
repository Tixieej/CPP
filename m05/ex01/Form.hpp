/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:11:09 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/12/14 12:58:05 by rde-vrie      ########   odam.nl         */
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
	private:
		Form(void);
		std::string	const	_name;
		bool				_isSigned;
		int const			_reqGrade;

	public:
		Form(const std::string name, const int reqGrade);
		Form(Form const &);
		virtual ~Form(void);
		Form			&operator=(Form const &);
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
	std::ostream		&operator<<(std::ostream &o, Form const &form);

#endif
