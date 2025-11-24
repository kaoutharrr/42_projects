/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:38 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/09 13:54:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap ::  ScavTrap()
{
    std :: cout << "Default constructor of scavTrap  called \n";
    Name = "default";
    HitPoints = 100;
    EnergyPoints = 50;
    attackDamage  = 20;
}

ScavTrap :: ScavTrap(const std :: string& N) : ClapTrap(N)
{
    Name = N;
    HitPoints = 100;
    EnergyPoints = 50;
    attackDamage  = 20;
    std :: cout << "Parametrized constructor of scavtrap called\n";
}

ScavTrap :: ScavTrap( ScavTrap& other) :  ClapTrap(other)
{
    std :: cout << "Copy constructor of scavtrap called\n";
    *this = other;
}

ScavTrap& ScavTrap :: operator=(const ScavTrap& other)
{
    std :: cout << "Copy assignment operator  of scavtrap called \n";
    if(this == &other)
        return(*this);
    Name = other.Name;
    HitPoints = other.HitPoints;
    EnergyPoints = other.EnergyPoints;
    attackDamage  = other.attackDamage;
    return(*this);
}


void ScavTrap :: guardGate()
{
    std :: cout << " ScavTrap is now in Gate keeper mode." << std :: endl;
}

void  ScavTrap :: attack(const std::string& target)
{
    if(!HitPoints || !EnergyPoints)
    {
        std :: cout << "no points left \n";
        return;
    }
    EnergyPoints--;
    std :: cout << "ScavTrap "  << Name << " attacks " <<target << " causing ";
    std :: cout  << attackDamage  << "  points of damage!\n";
}
ScavTrap :: ~ScavTrap(void)
{
    std :: cout << "destructor of ScavTrap  Called \n";
}