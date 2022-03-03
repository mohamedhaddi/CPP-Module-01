/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:31:05 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/03 00:07:13 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void searchAndReplace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream ifs(filename);
	std::ofstream ofs(filename + ".replace");
	ofs << ifs.rdbuf();
	ifs.close();

	
}

int main(void)
{
	std::string filename = "file";

	searchAndReplace(filename, "what", "who");

	return (0);
}
