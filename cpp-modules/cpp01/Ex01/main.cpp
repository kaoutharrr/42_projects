/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:38:26 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 03:53:39 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


int main()
{
    Zombie *arrZombie = zombieHorde( 14, "megami");
    if(!arrZombie)
        return(0);
    for(int i  = 0 ; i  < 14; i++)
    {
        arrZombie[i].announce();
    }
    delete[]arrZombie;
}