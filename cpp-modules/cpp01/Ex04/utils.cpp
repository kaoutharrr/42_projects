/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:04:07 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 04:06:34 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"header.hpp"

int check(std :: string filename, std :: string s1, std :: string s2)
{
    if(filename.empty())
        std :: cerr << "invalid file name !!" << std :: endl ;
    if(s1.empty() || s2.empty())
        std :: cerr << "invaid arguments !! " << std :: endl;
    else
        return(0);
    return(1);
}

std ::string    myReplace(std :: string Content , std ::string s2, int pos, int start)
{
    std :: string newText;
   newText = Content.substr(start, pos - start);
    newText += s2;
    return(newText);
}