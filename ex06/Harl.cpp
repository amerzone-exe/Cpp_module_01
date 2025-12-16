/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:05:08 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/12 13:53:29 by jpiquet          ###   ########.fr       */
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

/*Compare the string level to a an array of string, if level match a function name 
it's it returns the index else -1*/
int	Harl::_filter( std::string level )
{
	std::string	message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == message[i])
			return i;
	}
	return -1;
}

/*Get the index (filter) of the array of "complains" and do a switch case depending of it*/
void	Harl::complain( std::string level)
{
	int filter = _filter(level);

	switch (filter)
	{
		case 0 :
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout << std::endl;
		case 1 :
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << std::endl;
		case 2 :
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << std::endl;
		case 3 :
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			std::cout << std::endl;
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. \
I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years, whereas you started working here just last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
