/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:40:22 by rixt          #+#    #+#                 */
/*   Updated: 2020/11/07 14:09:15 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include <string>
# include "ClapTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string);
		NinjaTrap(NinjaTrap const &);
		~NinjaTrap();
		void		operator=(NinjaTrap const &);
		void		ninjaShoebox(std::string const &);

	private:
};

#endif
