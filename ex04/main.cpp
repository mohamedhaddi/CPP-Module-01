/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:31:05 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/03 10:08:00 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream ifs(filename);
	if (!ifs)
	{
		std::cout << "Error: " << strerror(errno) << std::endl;
		exit(1);
	}

	if (s1.empty())
	{
		std::cout << "Error: First string must not be empty" << std::endl;
		exit(1);
	}

	std::ofstream ofs(filename + ".replace");
	if (!ofs)
	{
		std::cout << "Error: Can't create file" << std::endl;
		exit(1);
	}

	std::string line;
	while (std::getline(ifs, line))
	{
		while (true)
		{
			size_t index = line.find(s1);
			if (index == std::string::npos)
				break ;
			line.insert(index, s2).erase(index + s2.length(), s1.length());
		}
		ofs << line << std::endl;
	}

	ifs.close();
	ofs.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./a.out <filename> <string> <string>" << std::endl;
		return (1);
	}

	replace(argv[1], argv[2], argv[3]);

	return (0);
}
