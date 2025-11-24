/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:03:55 by kkouaz            #+#    #+#             */
/*   Updated: 2023/10/28 03:54:07 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std :: string S = "HI THIS IS BRAIN";
    std :: string* stringPTR = &S;
    std :: string &stringREF = S;

    std :: cout << "The memory address of the string variable : " << &S << std :: endl ;
    std :: cout << "The memory address held by stringPTR : " << stringPTR << std :: endl;
    std :: cout << "The memory address held by stringREF : " << &stringREF << std :: endl;

    std :: cout << "The value of the string variable : " << S << std :: endl;
    std :: cout << "The value pointed to by stringPTR.: " << *stringPTR << std :: endl;
    std :: cout << "The value pointed to by stringREF : " << stringREF << std :: endl;

}
