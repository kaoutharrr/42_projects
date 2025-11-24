/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:12:28 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/02 06:44:48 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
class Contact
{
    private:
    std ::string FirstName;
    std ::string LastName;
    std ::string NickName;
    int PhoneNumber;
    std ::string DarkestSecret;
    int index ;

    public:
    
    Contact();
    void init(std ::string &First, std ::string &Last, std ::string &Name
    , int
     &Number,std ::string &Secret, int index);
    void display();
    void fields();
    void update(int old);
        
};
#   endif
