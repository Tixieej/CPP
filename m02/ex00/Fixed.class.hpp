/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:17:48 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/10/25 13:45:01 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <string>

class Fixed
{
	public:
		Fixed(std::string type, std::string name);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixedPointValue;
		static const int	_fracBits;
		
};

#endif
