/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:53:51 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 04:43:56 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("KHKKJHKJ");
    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("DEBUG");
    harl.complain("KHKKJHKJ");
    harl.complain("ERROR");
    return(0);
}