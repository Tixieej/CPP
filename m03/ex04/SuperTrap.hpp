/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Supertrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:09:53 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/08 13:08:54 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string);
		SuperTrap(SuperTrap const &);
		~SuperTrap();
		SuperTrap &		operator=(SuperTrap const &);

	private:
		SuperTrap(void);
};

#endif
