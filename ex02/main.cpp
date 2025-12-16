/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:09:02 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/16 17:34:48 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*A short program to introduce de references & pointers for C++*/
int main( void )
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address :" << std::endl;

	std::cout << "str       = " << &str << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "stringREF = " << &stringREF << std::endl;

	std::cout << "Value :" << std::endl;
	
	std::cout << "str       = " << str << std::endl;
	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;

	return 0;
}