/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:44 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/05 10:03:23 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie* horde = zombieHorde(10, "Francis");

	for (int i = 0; i < 10; i++)
		horde[i].announce();

	delete [] horde;

	return 0;
}
