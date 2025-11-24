/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:29:12 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/02 06:44:40 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>


Contact :: Contact()
{
    index = 0;
}
void    set(std ::string str)
{
    std :: string s;

    if(str.length() > 10)
    {
        s = str.substr(0, 9);
        std :: cout << s << "." << "|";
    }
    else
        std ::cout << std :: setw(10) << str << "|";

}

void  Contact::display()
{
    std :: string str;

    std ::cout << std :: setw(10) << index  << "|";
    set(FirstName);
    set(LastName);
    set(NickName);
    std :: cout << "\n";
}

void  Contact::init(std ::string &First, std ::string &Last, std ::string &Name
    , int&Number,std ::string &Secret, int i)
{
    FirstName = First;
    LastName = Last ;
    NickName = Name ;
    PhoneNumber = Number ;
    DarkestSecret = Secret;
    index = i;
}
void  Contact::fields()
{
    std ::cout << "first name :  " << FirstName << "\n";
    std ::cout << "last name  : " << LastName << "\n" ;
    std ::cout << "nick name  : " << NickName << "\n" ;
    std ::cout << "phone number : " << PhoneNumber << "\n";
    std :: cout << "darkest secret : " << DarkestSecret << std :: endl;
}
void Contact :: update(int old)
{
    index = old;
}