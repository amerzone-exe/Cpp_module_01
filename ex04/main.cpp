/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:42:41 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/06 15:55:19 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Programme à implementer :
Prendre 3 paramètres : 1 fichier et 2 string (s1 & s2)

Le but etant de copier le contenu du fichier dans un nouveau fichier
(auquel on rajoutera le suffix => .replace)
En remplaceant chaque occurence de la 1er string(s1) par la 2eme string(s2)
*/

/* Fonction a utilisé : string::find() | string::substr() | string::erase() | string::insert() */

/*Bien checker si le fichier à été ouvert avec ifs.is_open() qui renvoie un bool*/

#include <fstream>
#include <string>
#include <iostream>

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
		std::cout << "Error: " << av[1] << " can't be open !" << std::endl;
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
