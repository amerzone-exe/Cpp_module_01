/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:44 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/18 10:38:46 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie* horde = zombieHorde(10, "Francis");
	if (horde == NULL)
		return 1;

	for (int i = 0; i < 10; i++)
		horde[i].announce();

	delete [] horde;

	return 0;
}
