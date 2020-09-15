/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rixt <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 15:29:06 by rixt          #+#    #+#                 */
/*   Updated: 2020/09/15 11:42:58 by rde-vrie      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void replace_string(std::string &line, std::string s1, std::string s2)
{
    size_t pos = line.find(s1);
    while (pos != std::string::npos)
    {
        line.replace(pos, s1.size(), s2);
        pos = line.find(s1, pos + s2.size());
    }
}

int		main(int argc, char *argv[])
{
	std::string		file, s1, s2, line;
	
	if (argc != 4)
	{
		std::cout << "Please give a filename and two strings" << std::endl;
		return 0;
	}
	file = argv[1];
	std::ifstream	ifs(file);
	s1 = argv[2];
	s2 = argv[3];
	if (!ifs)
	{
		std::cout << "Something went wrong while opening the file" << std::endl;
		return 0;
	}
	if (s1 == "" || s2 == "")
	{
		std::cout << "Empty strings are not aloud" << std::endl;
		return 0;
	}
	std::string		output = file.append(".replace");
	std::ofstream	ofs(output);
	while (std::getline(ifs, line))
	{
		replace_string(line, s1, s2);
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
