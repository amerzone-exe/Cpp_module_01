/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:05:02 by jpiquet         #+#    #+#             */
/*   Updated: 2025/12/06 16:05:02 by jpiquet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

		int		_filter( std::string level );

    public:
        Harl( void );
        ~Harl( void );

		void	complain( std::string level );
};

typedef	void (Harl::*funcPtr)();

#endif
