/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:09:05 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/04 01:19:20 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

void check(std :: string str)
{
    const char *line = str.c_str();
    int i = 0;
    while(line[i])
    {
        while(i != 3)
        {
            if(!isdigit(line[i]))
                throw(std :: runtime_error("1error :invalid format"));
            i++;
        }
        if(line[i] != '-' || line[i + 3] != '-')
            throw(std :: runtime_error("2error :invalid format"));
        i++;
        if(!isdigit(line[i]) || !isdigit(line[i + 1]))
            throw(std :: runtime_error("3error :invalid format"));
        i++;
        if(!isdigit(line[i]) || !isdigit(line[i + 1]))
            throw(std :: runtime_error("4error :invalid format"));
    }
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