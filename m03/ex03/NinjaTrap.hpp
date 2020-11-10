/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:40:22 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/10 13:19:12 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string);
		NinjaTrap(NinjaTrap const &);
		~NinjaTrap();
		void		operator=(NinjaTrap const &);
		void		ninjaShoebox(FragTrap const & target);
		void		ninjaShoebox(ScavTrap const & target);
		void		ninjaShoebox(ClapTrap const & target);
		void		ninjaShoebox(NinjaTrap const & target);

	private:
};

#endif
