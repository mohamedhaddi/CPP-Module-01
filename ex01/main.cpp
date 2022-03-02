/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddi <mhaddi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:31:05 by mhaddi            #+#    #+#             */
/*   Updated: 2022/03/02 17:10:59 by mhaddi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 30;
	Zombie *zombies = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
