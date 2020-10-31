/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:03:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/10/27 16:50:31 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <string>

class FragTrap
{
	public:
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		~FragTrap();
		void		FragTrap::operator=(FragTrap const &);
		rangedAttack(std::string const & target);
		meleeAttack(std::string const & target);
		takeDamage(unsigned int amount);
		beRepaired(unsigned int amount);

	private:
		int			HP;
		int			maxHP;
		int			energy;
		int			maxEnergy;
		int			level;
		std::string	name;
		int			meleeAtkDmg;
		int			rangedAtkDmg;
		int			armorDmgRed;
};

#endif
