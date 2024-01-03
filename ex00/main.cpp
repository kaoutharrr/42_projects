/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:09:05 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/03 13:54:58 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

void check(std :: string line)
{
    
}

int main(int ac, char **av)
{
    if(ac > 2)
    {
        std :: cout << "too many arguments :)\n";
        return(1);
    }
    std :: ifstream infile(av[1]);
    if(!infile.is_open())
    {
        std :: cerr << "invalid argument !!\n";
        return(1);
    }
    std :: string line;
    try
    {
        std :: getline(infile, line);
        if(line != "date | value")
            throw(std :: runtime_error("invalid header"));
        while(std :: getline(infile, line))
        {
            check(line);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}