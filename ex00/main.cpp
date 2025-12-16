/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:44 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/16 17:37:22 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*The purpose of this exercice is to show that it's up to us to delete a zombie 
instance whenever we want went the objet is dynamically allocated.*/
int main( void )
{
	Zombie carlos("Carlos");
	carlos.announce();

	Zombie *merguez = newZombie("Merguez");
	merguez->announce();

	delete merguez;

	randomChump("Francis");

	return 0;
}
