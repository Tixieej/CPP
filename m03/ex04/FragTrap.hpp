/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:03:59 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/07 14:09:53 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		~FragTrap();
		void		operator=(FragTrap const &);
		void		vaulthunter_dot_exe(std::string const &);

	private:
};

#endif
