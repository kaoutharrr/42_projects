/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:39:00 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 05:38:04 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(void)
{
    std ::cout << "constructor called " << std ::endl;
}

void Zombie :: init(std :: string n)
{
    name = n;
}
void Zombie :: announce(void)
{
    std :: cout << name << ":" << " BraiiiiiiinnnzzzZ... " << std :: endl;
}

Zombie :: ~Zombie()
{
    std :: cout << "destructor called " << std ::endl ;
}