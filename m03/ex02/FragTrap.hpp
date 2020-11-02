/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:03:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/02 17:30:23 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		~FragTrap();
		void		operator=(FragTrap const &);
		void		vaulthunter_dot_exe(std::string const & target);
		std::string	getName(void) const;

	private:
};

#endif
