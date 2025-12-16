/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:42:41 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/12 13:48:51 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	args_check(int ac, char **av)
{
	if (ac < 4)
	{
		std::cout << "Error: too few arguments" << std::endl;
		return (1);
	}
	else if (ac > 4)
	{
		std::cout << "Error: too many arguments" << std::endl;
		return (1);
	}
	if (!av[2][0])
	{
		std::cout << "Error: first string can't be empty." << std::endl;
		return (1);
	}
	return (0);
}

/*Find the first occurence of s1, replace it by s2, go forward by adding s2.length*/
std::string	searchAndReplace(std::string buffer, std::string s1, std::string s2)
{
	std::string	newString = buffer;
	size_t			index = 0;

	while ((index = newString.find(s1, index)) != newString.npos)
	{
		newString = newString.erase(index, s1.length());
		newString = newString.insert(index, s2);
		index += s2.length();
	}
	return (newString);
}

int main(int ac, char **av)
{
	if (args_check(ac, av))
		return (1);

	std::string		n_outFile;
	n_outFile = n_outFile + av[1] + ".replace";
	
	std::ifstream	inFile(av[1]);
	if (!inFile.is_open())
	{
		std::cout << "Error: " << av[1] << " can't be open or doesn't exist !" << std::endl;
		return (1);
	}

	std::ofstream	outFile(n_outFile.c_str());
	if (!outFile.is_open())
	{
		std::cout << "Error: " << n_outFile << " can't be open !" << std::endl;
		inFile.close();
		return (1);
	}

	std::string	buffer;
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (!s1.compare(s2))
	{
		while (std::getline(inFile, buffer))
		{
			outFile << buffer << "\n";
		}
	}
	else
	{
		while (std::getline(inFile, buffer, '\0'))
		{
			outFile << searchAndReplace(buffer, s1, s2);
		}
	}
	inFile.close();
	outFile.close();
	return (0);
}
