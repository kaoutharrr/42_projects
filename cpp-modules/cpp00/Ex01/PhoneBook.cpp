/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:47:41 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/02 12:04:31 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "header.hpp"
#include <iostream>
#include<iomanip>
#include <string>
#include<sstream>

PhoneBook :: PhoneBook()
{
    index = 0;
    old = 0;
}
void PhoneBook::print()
{  
    int i = 0;
    std :: cout << std :: setw(10) << "index" << "|" << std ::setw(10) <<
    "first name" << "|" << std :: setw(10) << " last name" << "|" << std ::setw(10)
    << "nick name" << std  :: endl;
    std :: cout << std :: setw(10) << "-----" << "|" << std ::setw(10) <<
    "----------" << "|" << std :: setw(10) << "---------" << "|" << std ::setw(10)
    << "---------" << std  :: endl;
    while(i <index)
    {
        contacts[i].display();
        i++;
    } 
}

void  PhoneBook::add()
{
    std::cout<<"please enter the following information for the new contact :\n";
    std ::string First, Last, Name, Secret;
    int Number;
    Contact newContact;

    
    Field(First, "first name : ");
    Field(Last, "last name : ");
    Field(Name, "nickname  : ");
    NumberField(Number, "phone number : ");
    Field(Secret, "darkest secret : ");
    newContact.init(First, Last, Name, Number, Secret, index);
    if(index < 8)
    {
        contacts[index] = newContact;
        index++;
    }
    else
    {
        newContact.update(old);
        contacts[old] = newContact;
        old++; 
        if(old == 8)
            old = 0;
    }
    std::cout << "\033[35m";
    std :: cout << "contact saved succussflly 😃\n";
    std::cout << "\033[0m";
}

void  PhoneBook:: search()
{
    int i;
    std :: string str;
    print();
    while(1)
    { 
        std ::cout << "enter the index of your conatact please :)";
        if(!std :: getline(std ::cin, str))
        {
            if(std :: cin.eof())
                exit(0);
               //return;
        }
        else
        {
            std :: istringstream s(str);
            if(!(s >> i) || !s.eof() || i >= index || i < 0)
            {
                std :: cerr << "invalid index try again please :)\n";
            }
            else
                break;
        }    
    }
    contacts[i].fields();
}