/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 09:47:33 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/11/10 16:39:36 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <string>

class Enemy
{
	public:
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
	private:
		Enemy();
	};

#endif
