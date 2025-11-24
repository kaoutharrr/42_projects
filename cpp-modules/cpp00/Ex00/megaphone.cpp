/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:44:54 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/02 12:39:55 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

int main(int ac, char **av)
{
    int i;
    int j;
    char a;
    j = 0;
    i = 1;

    std :: string arg;
    if(ac <= 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            if(islower(av[i][j]))
                a = toupper(av[i][j]);
            else
                a = av[i][j];
            std :: cout << a;
            j++;
        }
        i++;
   }
}



