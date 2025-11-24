/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:12:37 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/07 07:13:32 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
   FragTrap s("HI");
   for (int i = 0; i< 100 ;i++)
   {
         s.attack("AY HAJAAA");
   }
   s.highFivesGuys();
   for (int i = 0; i< 5 ;i++)
   {
         s.beRepaired(1);
   }
   s.highFivesGuys();
}
   
