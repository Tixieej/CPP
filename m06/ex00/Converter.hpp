/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converter.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/06/05 15:30:25 by rde-vrie      #+#    #+#                 */
/*   Updated: 2022/03/02 14:05:19 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H
# include <string>
# include <iostream>

class Converter
{
	public:
		Converter();
		Converter(Converter const &);
		virtual ~Converter();
		Converter			&operator=(Converter const &);
		void				stoc(std::string s);
		void				stoi(std::string s);
		void				stof(std::string s);
		void				stod(std::string s);
		bool				isConvertable(std::string s);
};
	std::ostream		&operator<<(std::ostream &o, Converter const &conv);

#endif
