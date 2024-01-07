/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:18:23 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/04 22:58:47 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"
void check(std :: string str)
{
    const char* line;
    int count = 0;
    line = str.c_str();
    char s[14] =  "aaaa-aa-aa | ";
    int i = 0;
    if(str.size() < 14)
        throw(std :: runtime_error("Error: bad input => "));
    while(line[i] && s[i])
    {
        if(s[i] == '-' || s[i] == ' ' || s[i] == '|')
        {
            if(s[i] != line[i])
                throw(std :: runtime_error("Error: bad input => "));
        }
        else if(!isdigit(line[i]))
        {
                throw(std :: runtime_error("Error: bad input => "));
        }
        i++;
        if(i == 13)
        {
            if(line[i] == '-')
                i++;
            while(line[i])
            {
                if(i != 13 && line[i] == '.')
                {
                    count++;
                    if(count > 1 || !isdigit(line[i + 1]))
                        throw(std :: runtime_error("Error: bad input => "));
                }
                else if(!isdigit(line[i]))
                    throw(std :: runtime_error("Error: bad input => "));
                i++;
            }   
        }
    }
}

void fill_map(std :: map <std :: string, float > &data)
{
    float n;
    std :: string line;
    std :: ifstream infile("data.csv");
    if(!infile.is_open())
        throw(std :: runtime_error("could not open the file\n"));
    std :: getline(infile, line);
    while(std :: getline(infile, line))
    {
        std :: string s = line.substr(11);
        n = std :: atof(s.c_str());
        data.insert(std::make_pair(line.substr(0, 10), n));
    }
}

void compare(std :: string line, std :: map <std :: string, float > data)
{
    std :: string s;
    s = line.substr(13);

    std :: string date;
    float value;
    
    date = line.substr(0, 10);
   
    value = std :: atof(s.c_str());
    if(value < 0)
        throw(std :: runtime_error("Error : not a positive number."));
    if(value > 1000)
        throw(std :: runtime_error("Error: too large  number."));
    int y = std::atoi(date.substr(0, 4).c_str());
    int month =  std::atoi(date.substr(5, 7).c_str());
    int day =  std::atoi(date.substr(8, 10).c_str());
    if(y == 0 || month >12 || !month || !day || day > 31)
        throw(std :: runtime_error("Error : invalid date "));
    std :: map <std :: string, float >  :: iterator it;
    it = data.find(date);
    if(it == data.end()) 
    {
        it = data.upper_bound(date);
        if(it != data.begin())
            it--;
        else
            throw(std :: runtime_error("error invalid input"));
    }
    std :: cout << date << " => " << value << " = " << it->second * value << "\n";


}
