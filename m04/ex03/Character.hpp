/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 13:35:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/12 16:37:43 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"
# include <string>
//# include "AMateria.hpp"

class Character : virtual public ICharacter
{
	private:
		std::string			_name;

	public:
		Character(void);
		Character(std::string);
		Character(Character &copy);
		~Character(void);
		Character			&operator=(Character const &);
		std::string const 	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

};

#endif