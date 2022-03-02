/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:05:42 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/02 23:26:43 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const name) : _weapon(NULL), _name(name)
{
	return ;
}

void HumanB::attack(void) const
{
	std::cout	<< this->_name << " attacks with their "
				<< this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}

HumanB::~HumanB(void)
{
	return ;
}
