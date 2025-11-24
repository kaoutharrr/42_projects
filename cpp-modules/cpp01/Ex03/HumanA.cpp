/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:41:19 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/27 00:35:42 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

 HumanA :: HumanA(std :: string str, Weapon &W) :  Weapon1(W)
{
    name = str;
    std :: cout << "constructor of " << name << " has been called " << std :: endl ;
}

void HumanA :: attack(void)
{
    const std :: string &ref = Weapon1.getType();
    std :: cout << name <<  "  attacks with their " << ref << std :: endl;
}

HumanA :: ~HumanA(void)
{
    std :: cout << " destructor of " << name << " has been called " << std :: endl;  
}