/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:44:42 by jpiquet         #+#    #+#             */
/*   Updated: 2025/12/05 10:44:42 by jpiquet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon		_weapon;

    public:
        HumanA( void );
        ~HumanA( void );

		void	attack( void ) const;
};

#endif