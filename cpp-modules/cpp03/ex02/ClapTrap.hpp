/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:49:40 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/06 00:50:52 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
    protected :
        std :: string Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap();
        ClapTrap(const std :: string& N);
        ClapTrap(ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();


};


#endif