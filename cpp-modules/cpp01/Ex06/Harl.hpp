/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:02:49 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/24 21:04:25 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>
#include <string>

class Harl
{
    private :
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public :
        void    complain( std::string level );
};

#endif