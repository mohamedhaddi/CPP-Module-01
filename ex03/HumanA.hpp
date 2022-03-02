/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:03:41 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/02 23:19:54 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"
#include <string>

class HumanA
{

	private:

		Weapon & _weapon;
		std::string _name;

	public:

		HumanA(std::string const name, Weapon & _weapon);
		~HumanA(void);

		void attack(void) const;

};

#endif
