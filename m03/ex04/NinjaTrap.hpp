/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:40:22 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/10 15:07:19 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string);
		NinjaTrap(NinjaTrap const &);
		~NinjaTrap();
		void		operator=(NinjaTrap const &);
		void		meleeAttack(std::string const &);
		void		ninjaShoebox(FragTrap const &);
		void		ninjaShoebox(ScavTrap const &);
		void		ninjaShoebox(ClapTrap const &);
		void		ninjaShoebox(NinjaTrap const &);

	private:
};

#endif
