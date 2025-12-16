/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:52 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/11 10:54:58 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Create a new zombie it with the name
passed to as parameter & and announce it*/
void	randomChump( std::string name )
{
	Zombie newZombie(name);
	newZombie.announce();
}
