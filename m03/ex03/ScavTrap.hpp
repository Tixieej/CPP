/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:09:08 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/03 09:46:46 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &);
		~ScavTrap();
		void		operator=(ScavTrap const &);
		void		challengeNewcomer(std::string const & target);

	private:
};

#endif