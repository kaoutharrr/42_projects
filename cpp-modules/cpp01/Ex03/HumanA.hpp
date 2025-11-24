/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:36:54 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/26 04:32:23 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &Weapon1;
        std :: string name;
    public :
        HumanA(std :: string str ,Weapon& W);
        void attack(void);
        ~HumanA();
};
#endif