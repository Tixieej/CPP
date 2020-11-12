/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 13:19:20 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 17:17:27 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H
# include "Enemy.hpp"
# include <string>

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(RadScorpion const &);
		~RadScorpion();
		void				operator=(RadScorpion const &);
};

#endif