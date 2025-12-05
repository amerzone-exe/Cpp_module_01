/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:27:18 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/05 11:01:11 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::~Weapon( void ) {}

std::string const &	Weapon::getType( void )
{
	return this->_type;
}

void		Weapon::setType( std::string newType )
{
	this->_type = newType;
}
