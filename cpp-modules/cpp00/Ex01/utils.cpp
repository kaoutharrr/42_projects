/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:18:09 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/02 12:04:20 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include"PhoneBook.hpp"
#include <string>
#include<sstream>
#include <cstdlib>

void Field(std ::string& str, std ::string mode)
{
    while(1)
    {
        std ::cout << mode;
        if(!std ::getline(std::cin, str))
        {
            if(std::cin.eof())
               exit(0);
               //return;
        }
        else if (str.empty())
            std ::cerr << "A saved contact can't have emty fields !" << std :: endl;
        else
            break;
    }
}

void NumberField(int& number, std ::string mode)
{
    while(1)
    {
        std :: string s;
        std :: cout << mode;
        
        if(!std :: getline(std :: cin, s))
        {
            if(std::cin.eof())
             exit(0);
             //return;
        }
        else
        {
            std::istringstream str(s);
            if( !(str >> number) || !str.eof())
            {
                std :: cerr << "Please enter a valid number \n";
            }
            else
                break;  
        }
       if (s.empty())
            std ::cerr << "A saved contact can't have emty fields !" << std :: endl;
    }
}


// void NumberField(int& number, std::string mode) {
//     while (true) {
//         std::string s;
//         std::cout << mode;
//         if (std::cin.eof()) {
//             exit(0);
//         } else if (std::getline(std::cin, s)) {
//             std::istringstream iss(s);
//             if (!(iss >> number)) {
//                 std::cerr << "Please enter a valid number." << std::endl;
//             } else {
//                 // Successfully converted to a number
//                 break;
//             }
//         } else if (s.empty()) {
//             std::cerr << "A saved contact can't have empty fields!" << std::endl;
//         }
//     }
// }