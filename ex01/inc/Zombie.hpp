/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:59:06 by jpiquet           #+#    #+#             */
/*   Updated: 2025/12/05 10:06:43 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie( void );
		~Zombie( void );
		
		void	announce( void );
		void	setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name);

#endif
