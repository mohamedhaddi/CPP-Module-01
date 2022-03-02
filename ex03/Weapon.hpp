/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:03:41 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/02 23:22:59 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{

	private:

		std::string _type;

	public:

		Weapon(void);
		Weapon(std::string const & type);
		~Weapon(void);

		std::string const & getType(void) const;
		void setType(std::string const type);

};

#endif
