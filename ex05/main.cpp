/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:31:05 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/03 11:02:40 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Usage: ./Karen <level>" << std::endl;
		return (0);
	}

	karen.complain(argv[1]);

	return 0;
}
