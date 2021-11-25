/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/12 17:11:09 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/11/25 18:08:49 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(Form const &);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm			&operator=(RobotomyRequestForm const &);
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
	std::ostream		&operator<<(std::ostream &o, RobotomyRequestForm const &form);

#endif
