/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 09:03:41 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/03 16:09:56 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <string>

class Karen
{

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:

		Karen(void);
		~Karen(void);
		void complain(std::string level);

};

#endif
