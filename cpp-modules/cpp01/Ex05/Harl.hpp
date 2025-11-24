/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:15:10 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 02:52:09 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include<iostream>

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