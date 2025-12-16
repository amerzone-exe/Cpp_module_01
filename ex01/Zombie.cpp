/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:02:54 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/11 10:58:48 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) 
{
}

Zombie::~Zombie( void )
{
	std::cout << _name << ": is dead" << std::endl;
}

/*Print the name of the instance with : "Braiiiiiiiiinz" in addition*/
void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*Assign the _name variable member with the name passed as parameter*/
void	Zombie::setName( std::string name )
{
	this->_name = name;
}
