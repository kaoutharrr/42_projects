/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:38:01 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/27 18:19:05 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <typeinfo>

Zombie*    zombieHorde( int N, std::string name )
{
    if(N >= 0 && N <= 2147483647)
    {
        Zombie* arrZombie = new Zombie[N];
    
        for(int i  = 0 ; i < N; i++)
        {
            arrZombie[i].init(name);
        }
        return(arrZombie);
    }
    std :: cout << "error ! please enter a valid number\n";
    return(NULL);
}
