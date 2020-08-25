/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:41:05 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/08/25 13:32:02 by rde-vrie      ########   odam.nl         */
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
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << "Heap has run " << i << "laps\n";
		std
	}
			//laat pony rondjes rennen
			//pony heeft honger (status)
			//pony word gevoerd
			//pony heeft geen honger meer
}

void	Pony::ponyOnTheStack(void)
{
	Pony Stack = Pony();
}
