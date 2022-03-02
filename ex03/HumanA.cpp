/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:05:42 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/02 23:18:45 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const name, Weapon & weapon) : _weapon(weapon),
														  _name(name)
{
	return ;
}

void HumanA::attack(void) const
{
	std::cout	<< this->_name << " attacks with their "
				<< this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	return ;
}
