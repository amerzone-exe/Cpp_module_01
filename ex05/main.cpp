/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:08:54 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/05 10:59:16 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

/*The purpose of the exercice is to manipulate pointers on members functions*/
int main( void )
{
    Harl test;

	test.complain("DEBUG");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("ERROR");
    test.complain("NOTHING ON THE LIST");

    return 0;
}
