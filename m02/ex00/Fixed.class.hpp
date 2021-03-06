/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:17:48 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/26 13:46:14 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &number);
		~Fixed();
		void	operator=(Fixed const &number);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixedPointValue;
		static const int	_fracBits;
};

#endif
