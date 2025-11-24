/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:24:15 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 04:38:09 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include<iostream>

class Weapon
{
    private:
        std :: string type;
    public :
        Weapon(std :: string str);
        const std::string& getType();
        void setType(std :: string newType);
        ~Weapon();
};
#endif