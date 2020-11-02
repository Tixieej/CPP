/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:09:08 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/02 11:48:03 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <string>

class ScavTrap
{
	public:
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &);
		~ScavTrap();
		void		operator=(ScavTrap const &);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const & target);
		std::string	getName(void) const;

	private:
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
