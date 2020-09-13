/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:29:06 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/13 18:02:50 by rixt          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int		main(void)
{
	std::ifstream	ifs("story");
	std::string		s1 = "dog";
	std::string		s2 = "cat";
	std::string		test;
	std::ofstream	ofs("story.replace");

	std::cout << "Start" << std::endl;

	while(std::getline(ifs, test))
	{
		std::cout << test << std::endl;
		ofs << test << std::endl;
	}
	

//	while (!ifs.eof())
//	{
//		ifs >> test;
//		if (ifs.eof())
//			break;
//		std::cout << test << " ";
//		if (test == s1)
//			ofs << s2;
//		else
//			ofs << test;
//		ofs << " ";
//	}
	
	std::cout << "1" << std::endl;
	std::cout << std::endl;
	std::cout << "2" << std::endl;
	ifs.close();


	std::cout << "3" << std::endl;
	ofs << std::endl;
	ofs.close();
	std::cout << "Stop" << std::endl;
	return 0;
}
//Idee: read een line, split op spaties, vervang s1 door s2, maak er weer een line van, put in file.replace, plak er een endl achter, next.
