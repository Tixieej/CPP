/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Voldemort.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 14:22:58 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/22 14:23:40 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VOLDEMORT_H
# define VOLDEMORT_H
# include "Enemy.hpp"
# include <string>

class Voldemort : public Enemy
{
	public:
		Voldemort();
		Voldemort(Voldemort const &);
		virtual ~Voldemort();
		Voldemort			&operator=(Voldemort const &);
};

#endif
