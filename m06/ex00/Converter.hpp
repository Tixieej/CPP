/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/05 15:30:25 by rde-vrie      #+#    #+#                 */
/*   Updated: 2022/03/02 13:32:04 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H
# include <string>
# include <iostream>

class Converter
{
	private:


	public:
		Converter(void);
		Converter(Converter const &);
		virtual ~Converter(void);
		Converter			&operator=(Converter const &);
		void				stoc(std::string s);
		void				stoi(std::string s);
		void				stof(std::string s);
		void				stod(std::string s);
		bool				isConvertable(std::string s);
};
	std::ostream		&operator<<(std::ostream &o, Converter const &bC);

#endif
