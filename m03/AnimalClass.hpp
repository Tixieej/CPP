# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    test                                               :+:    :+:             #
#                                                      +:+                     #
#    By: rde-vrie <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/31 10:58:22 by rde-vrie      #+#    #+#                  #
/*   Updated: 2020/10/31 11:40:00 by rde-vrie      ########   odam.nl         */
#                                                                              #
# **************************************************************************** #

#include <string>

class Animal
{
	private:
		std::string	name;
	protected:
		int			_nbrOfLegs;

	public:
		Animal();
		~Animal();
		void		run(int distance);
};

class Quadruped
{
	// een object met 4 poten, tafel, kat, hond...
}

class Cat : public Animal, public Quadruped
{
	private:

	public:
		Cat();
		~Cat();
		void	scratch(std::string const & target);
};

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		void	bark(std::string const & target);
};
