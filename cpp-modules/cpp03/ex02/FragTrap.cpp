/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:59:42 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/09 13:25:30 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap ::  FragTrap()
{
    std :: cout << "Default constructor of FragTrap  called \n";
    Name = "default";
    HitPoints = 100;
    EnergyPoints = 100;
    attackDamage  = 30;
}

FragTrap :: FragTrap(std :: string N) : ClapTrap(N)
{
    Name = N;
    HitPoints = 100;
    EnergyPoints = 100;
    attackDamage  = 30;
    std :: cout << "Parametrized constructor of FragTrap called\n";
    
}

FragTrap :: FragTrap(FragTrap& other) : ClapTrap(other)
{
    std :: cout << "Copy constructor of FragTrap";
    *this = other;
}

FragTrap& FragTrap :: operator=(const FragTrap& other)
{
    std :: cout << "Copy assignment operator  of FragTrap called \n";
    if(this == &other)
        return(*this);
    Name = other.Name;
    HitPoints = other.HitPoints;
    EnergyPoints = other.EnergyPoints;
    attackDamage  = other.attackDamage;
    return(*this);
}

void FragTrap :: highFivesGuys(void)
{
    std :: cout << "Give me  a positive high five guys , please !\n";
}

FragTrap :: ~FragTrap(void)
{
    std :: cout << "destructor of FragTrap  Called \n";
}