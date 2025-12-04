/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:44 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/04 18:36:29 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
