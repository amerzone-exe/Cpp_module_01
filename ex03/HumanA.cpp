/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:48:15 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/05 11:13:31 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( void )
{
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << "attacks with their" << this->_weapon.getType();
}
