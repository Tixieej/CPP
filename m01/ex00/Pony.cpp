/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:41:05 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/08/24 22:52:08 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

Pony::Pony(void)
{
	return;
}

Pony::~Pony(void)
{
	return;
}

void	Pony::ponyOnTheHeap(void)
{
	Pony *Heap = new Pony();
}

void	Pony::ponyOnTheStack(void)
{
	Pony Stack = Pony();
}
