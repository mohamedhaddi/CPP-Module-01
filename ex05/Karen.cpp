/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:05:42 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/03 11:11:19 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void)
{
	return ;
}

void Karen::complain(std::string level)
{
	void (Karen::*levels[5])(void) = {
				&Karen::debug,
				&Karen::info,
				&Karen::warning,
				&Karen::error,
				&Karen::critical
			};

	(this->*levels[	(level == "DEBUG") ? 0 :
					(level == "INFO") ? 1 :
					(level == "WARNING") ? 2 :
					(level == "ERROR") ? 3 : 4 ])();
}

void Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(void)
{
	std::cout	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! "
				<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void)
{
	std::cout 	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started "
				<< "working here since last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::critical(void)
{
	std::cout << "This level of complaints doesn't exist yet." << std::endl;
}

Karen::~Karen(void)
{
	return ;
}
