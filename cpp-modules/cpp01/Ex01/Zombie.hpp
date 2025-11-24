/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:18:21 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 01:54:29 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <new>

class Zombie
{
    private :
        std :: string name;
    public :
        Zombie(void);
        void announce( void );
        void init(std :: string n);
        ~Zombie(void);
};

Zombie*    zombieHorde( int N, std::string name );
#endif