/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:44:48 by jpiquet         #+#    #+#             */
/*   Updated: 2025/12/05 10:44:48 by jpiquet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon*		_weapon;

    public:
		HumanB( std::string name );
		~HumanB( void );
	
		void	attack( void );
		void	setWeapon( Weapon& weapon );
};

#endif
