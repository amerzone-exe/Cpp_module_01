/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:49 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/11 10:54:27 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Create a zombie with operator new & name it with the string passed as parameter*/
Zombie* newZombie( std::string name)
{
	Zombie*	newZombie = new Zombie(name);
	return newZombie;
}
