/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:57:56 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/11 20:04:31 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie1(name);
    zombie1.announce();
}