/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:48:22 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/05 16:37:16 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::setWeapon( Weapon& weapon )
{
	_weapon = &weapon;
}

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}
