/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:48:22 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/18 10:47:58 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
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
	if (this->_weapon == NULL)
	{
		std::cout << _name << " attacks with nothing" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}
