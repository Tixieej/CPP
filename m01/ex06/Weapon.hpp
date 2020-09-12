/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 21:57:17 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/12 13:48:14 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <string>

class Weapon
{
	public:
		Weapon(std::string);
		~Weapon();
		std::string	getType() const;
	//	std::string			getType();
		void				setType(std::string type);
	private:
		std::string			type;
};

#endif
