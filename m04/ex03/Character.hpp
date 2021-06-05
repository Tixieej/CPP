/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 13:35:59 by rixt          #+#    #+#                 */
/*   Updated: 2021/06/05 15:09:56 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include <string>

class Character : virtual public ICharacter
{
	private:
		std::string			_name;
		AMateria			*_inv[4];

	public:
		Character(void);
		Character(std::string);
		Character(Character &copy);
		virtual ~Character(void);
		Character			&operator=(Character const &);
		std::string const 	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
