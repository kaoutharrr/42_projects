/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:22:25 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 03:57:46 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    Weapon  club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

 

Weapon  club1 = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club1);
jim.attack();
club1.setType("some other type of club");
jim.attack();
 return 0; 
}