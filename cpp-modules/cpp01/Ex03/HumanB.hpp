/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:46:58 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 04:04:28 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *Weapon1;
        std :: string name;
    public :
        HumanB(std :: string str);
        void setWeapon(Weapon& W);
        void attack(void);
        ~HumanB();
};
#endif