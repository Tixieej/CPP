/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 16:21:42 by rixt          #+#    #+#                 */
/*   Updated: 2020/08/24 14:38:58 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	char	c;
	int		i;
	int		j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
 			{
				c = toupper(argv[j][i]);
				std::cout << c;
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	return 0;
}
