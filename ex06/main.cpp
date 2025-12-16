/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:08:54 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/10 09:05:17 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main( int ac, char **av )
{
	if (ac != 2 || av[1][0] == '\0')
		return 1;

	Harl		filter;	
	std::string input = av[1];

	filter.complain( input );

	return 0;
}
