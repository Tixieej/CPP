/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:47:33 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/09 17:04:24 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <string>

class Enemy
{
	public:
		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &);
		virtual ~Enemy();
		void				operator=(Enemy const &);
		int					getHP(void) const;
		std::string			getType(void) const;
		virtual void		takeDamage(int);

	protected:
		int					_hp;
		std::string			_type;
	};

#endif
