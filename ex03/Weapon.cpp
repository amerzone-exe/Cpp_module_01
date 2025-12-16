/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:27:18 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/11 11:04:57 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
}

Weapon::~Weapon( void ) {}

std::string const &	Weapon::getType( void ) const
{
	return _type;
}

/*Assign variable member _type with newType*/
void		Weapon::setType( std::string newType )
{
	_type = newType;
}
