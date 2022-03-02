/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:05:42 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/02 23:22:49 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void): _type("Default")
{
	return ;
}

Weapon::Weapon(std::string const & type): _type(type)
{
	return ;
}

std::string const & Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string const type)
{
	this->_type = type;
}

Weapon::~Weapon(void)
{
	return ;
}
