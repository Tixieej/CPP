/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:34:04 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/10 10:09:06 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(ClapTrap const &);
		~ClapTrap();
		void		operator=(ClapTrap const &);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName(void) const;

	protected:
		int			_HP;
		int			_maxHP;
		int			_energy;
		int			_maxEnergy;
		int			_level;
		std::string	_name;
		int			_meleeAtkDmg;
		int			_rangedAtkDmg;
		int			_armorDmgRed;
};

#endif
