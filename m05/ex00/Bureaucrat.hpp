/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/05 15:30:25 by rde-vrie      #+#    #+#                 */
/*   Updated: 2021/06/05 17:14:06 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>
# include <iostream>

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &);
		virtual ~Bureaucrat(void);
		Bureaucrat			&operator=(Bureaucrat const &);
		std::string const	&getName() const;
		int	const			&getGrade() const;
//		std::string			GradeTooHighException(int grade); //misschien worden dit geen methodes.. geen idee nog
//		std::string			GradeTooLowException(int grade);
		void				increment();
		void				decrement();
};
	std::ostream		&operator<<(std::ostream &o, Bureaucrat const &bC);

#endif
