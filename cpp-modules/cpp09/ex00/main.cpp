/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:09:05 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/08 00:36:23 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"


int main(int ac, char **av)
{
    std :: map <std :: string, float > data;
   
    if(ac > 2)
    {
        std :: cerr << "too many arguments :)\n";
        return(1);
    }
    std :: ifstream infile(av[1]);
    try
    {
        fill_map(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    if(!infile.is_open())
    {
        std :: cerr << "Error: could not open file.\n";
        return(1);
    }
    std :: string line;
    std :: getline(infile, line);
    if(line != "date | value")
        throw(std :: runtime_error("invalid header"));
    while(std :: getline(infile, line))
    {
        try
        {
            check(line);
            try
            {
                compare(line , data);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what()  << line << '\n';
        }
    }
    return(0);
}