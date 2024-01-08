/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:24:41 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/08 00:40:18 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

void    check_digits(char **av)
{
    int i = 1;
    int j = 0;
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if( !isdigit(av[i][j]) && av[i][j] != ' ' )
                throw(std :: runtime_error("Error"));
            j++;
        }
        i++;
    }
}

void ft_swap(int& a, int& b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}