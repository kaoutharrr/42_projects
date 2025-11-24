/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:32:58 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 03:55:31 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon :: Weapon(std :: string str)
{
    type = str;
    std :: cout << "constructor for weapon has been called" << std :: endl;
}

const std::string& Weapon :: getType()
{
    return(type);
}

void Weapon :: setType(std :: string newType)
{
    type = newType;
}

Weapon :: ~Weapon()
{
   std :: cout << "destructor for weapon has been called" << std :: endl;
}