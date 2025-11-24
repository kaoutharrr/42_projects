/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:15:48 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 06:06:20 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie :: Zombie(std :: string N)
{ 
    name = N;
    std :: cout << "constructor for " << name ;
    std :: cout <<" has been called " << std :: endl;
}

void Zombie :: announce(void)
{
    std :: cout << name << ":" << " BraiiiiiiinnnzzzZ... " << std :: endl;
}

Zombie :: ~Zombie()
{
    std :: cout << "destructor  for " << name ;
    std :: cout << " has been called" << std :: endl;
}