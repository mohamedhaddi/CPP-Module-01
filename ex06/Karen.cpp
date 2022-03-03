/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:05:42 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/03 16:12:39 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void)
{
	return ;
}

std::string const toUpper(std::string str)
{
	int i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

void Karen::complain(std::string level)
{
	void (Karen::*levels[4])(void) =
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	int condition = (toUpper(level) == "DEBUG") +
					(toUpper(level) == "INFO") * 2 +
					(toUpper(level) == "WARNING") * 3 +
					(toUpper(level) == "ERROR") * 4;

	switch (condition) {
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*levels[0])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			(this->*levels[1])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*levels[2])();
			std::cout << std::endl;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*levels[3])();
			std::cout << std::endl;
			break ;
		default:
			std::cout	<< "[ Probably complaining about insignificant problems ]"
						<< std::endl;
			break ;
	}
}

void Karen::debug(void)
{
	std::cout	<< "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
				<< "I really do!"
				<< std::endl;
}

void Karen::info(void)
{
	std::cout	<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! "
				<< "If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void Karen::warning(void)
{
	std::cout 	<< "I think I deserve to have some extra bacon for free. "
				<< std::endl
				<< "I’ve been coming for years whereas you started "
				<< "working here since last month."
				<< std::endl;
}

void Karen::error(void)
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

Karen::~Karen(void)
{
	return ;
}
