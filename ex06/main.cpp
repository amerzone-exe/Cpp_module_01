/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:08:54 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/18 10:55:00 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

/*The purpose of the exercice is to introduce us switch/cases*/
int main( int ac, char **av )
{
	if (ac != 2)
		return 1;

	Harl		filter;	
	std::string input = av[1];

	filter.complain( input );

	return 0;
}
