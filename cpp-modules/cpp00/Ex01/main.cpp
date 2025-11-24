/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:04:26 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/02 06:56:13 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"PhoneBook.hpp"

int main()
{
    PhoneBook MyPhonebook;
    while(1)
    {
        std ::string Command;
        std :: cout << " Enter your command please : ";
        if(std :: getline(std ::cin, Command))
        {
            if(Command == "ADD")
                MyPhonebook.add();
            if(Command == "SEARCH")
                MyPhonebook.search();
            if(Command == "EXIT")
                break;
        }
        else
            break;
    }
}
