/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:49 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/18 10:48:09 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Create an array of Zombie of size N, name each by using setName() function*/
Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
		return (NULL);
	Zombie* newHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		newHorde[i].setName(name);
	return newHorde;
}
