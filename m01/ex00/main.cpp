/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rde-vrie <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 14:38:07 by rde-vrie      #+#    #+#                 */
/*   Updated: 2020/09/01 23:03:57 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(std::string name, int height)
{
	Pony *heap = new Pony(name, height);
	heap->run(8);
	heap->feed();
	heap->run(19);
	delete heap;
}

void	ponyOnTheStack(std::string name, int height)
{
	Pony stack(name, height);
	stack.run(16);
	stack.feed();
	stack.run(3);
}

int		main(void)
{
	std::cout << "No ponies were harmed in the making of this code" << std::endl;
	ponyOnTheHeap("Heap", 140);
	ponyOnTheStack("Stack", 130);

	return (0);
}
