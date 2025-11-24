/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:53:14 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 23:01:32 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void  Harl :: debug(void)
{
    std :: cout << "Debug message" << std :: endl;
}
void  Harl :: info(void)
{
    std :: cout << "INFO message" << std :: endl;
}

void  Harl :: warning(void)
{
    std :: cout << "WARNING message" << std :: endl;
}

void  Harl :: error(void)
{
    std :: cout << "ERROR message" << std :: endl;
}

void  Harl :: complain( std::string level )
{
    std :: string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    void(Harl :: *func[4])() = {&Harl :: debug, &Harl :: info, &Harl :: warning , &Harl :: error};

    int i = 0;

    while(i < 4)
    {
        if (levels[i] == level)
        {
            (this->*(func[i]))();
            return;
        }
        i++;
    }
    std :: cout << "not a valid message" << std :: endl;
}