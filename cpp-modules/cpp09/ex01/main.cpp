/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:00:31 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/05 20:11:00 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"


int main(int ac, char **av)
{
   
    if(ac < 2)
    {
        std :: cerr << "Error!\n";
        return(1);
    } 
    char *s;
    s = av[1];
    std :: stack<int> mystack;
    
    int i = 0;
    try
    {   
        while(s[i])
        {
            if(!isdigit(s[i])&& s[i] != ' ' && check_operators(s[i]))
                throw(std :: runtime_error("Error"));
            i++;
        }
        fillStack(s, mystack);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    


}