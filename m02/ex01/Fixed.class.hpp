/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:17:48 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/27 14:03:58 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &number);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		void			operator=(Fixed const &number);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
	private:
		int					_fixedPointValue;
		static const int	_fracBits;
};
	std::ostream		&operator<<(std::ostream &o, Fixed const &number);

#endif
