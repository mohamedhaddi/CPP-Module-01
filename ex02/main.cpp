/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:31:05 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/02 18:59:20 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "# Memory address of str: " << &str << std::endl;
	std::cout << "# Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "# Memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "# # # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl;
	std::cout << "# The value of str: " << str << std::endl;
	std::cout << "# The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "# The value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
