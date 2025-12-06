/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:05:08 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/06 16:14:03 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"


Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::complain( std::string level)
{
	
}

void	Harl::debug( void )
{
	std::cout << "print debug" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "print info" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "print warning" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "print error" << std::endl;
}
