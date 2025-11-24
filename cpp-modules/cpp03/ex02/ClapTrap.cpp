/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:50:08 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/07 07:01:59 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
    std :: cout << "Default constructor  of clapTrap called \n";
    Name = "defult";
    HitPoints = 10;
    EnergyPoints = 10;
    attackDamage  = 0;
}

ClapTrap :: ClapTrap(const std :: string& N)
{
    std :: cout << "Parametrized constructor of clapTrap called\n";
    Name = N;
    HitPoints = 10;
    EnergyPoints = 10;
    attackDamage  = 0;
}

ClapTrap :: ClapTrap(ClapTrap& copy)
{
    std :: cout << "Copy coonstructor of clapTrap called\n";
    *this = copy;
}

ClapTrap& ClapTrap :: operator=(const ClapTrap& other)
{
    std :: cout << "Copy assignment operator of clapTrap called \n";
    if(this == &other)
        return(*this);
    Name = other.Name;
    HitPoints = other.HitPoints;
    EnergyPoints = other.EnergyPoints;
    attackDamage  = other.attackDamage;
    return(*this);
}

void  ClapTrap :: attack(const std::string& target)
{
    
    if(!HitPoints || !EnergyPoints)
    {
        std :: cout << "no  points left \n";
        return;
    }
    EnergyPoints--;
    std :: cout << "ClapTrap "  << Name << " attacks " <<target << " causing ";
    std :: cout  << attackDamage<< " points of damage!\n";
}

void ClapTrap :: takeDamage(unsigned int amount)
{
    if(!HitPoints || !EnergyPoints)
    {
        std :: cout << "no points left \n";
        return;
    }
    if(HitPoints < amount)
        HitPoints = 0;
    else
        HitPoints -= amount;
    std :: cout << "ClapTrap " << Name << " takes a damage of : " ;
    std :: cout << amount << " points of damage" << std :: endl;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    if(!HitPoints || !EnergyPoints)
    {
        std :: cout << "no  points left \n";
        return;
    }
    EnergyPoints--;
    HitPoints+= amount;
    std :: cout << "ClapTrap  gets " << amount ;
    std :: cout << " of points and repairs itself "<< std :: endl;
}

ClapTrap :: ~ClapTrap(void)
{
    std :: cout << "destructor of claptrap Called \n";
}