/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Supertrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:09:53 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/03 13:33:20 by rixt          ########   odam.nl         */
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
		void		operator=(SuperTrap const &);
	//	void		vaulthunter_dot_exe(std::string const & target);
	//	void		ninjaShoebox(std::string const & target);

	private:
};

#endif
