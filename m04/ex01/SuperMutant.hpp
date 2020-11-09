/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 10:44:43 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 17:35:35 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
# include "Enemy.hpp"
# include <string>

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const &);
		~SuperMutant();
		void				operator=(SuperMutant const &);
		virtual void		takeDamage(int);

	protected:
	};

#endif
