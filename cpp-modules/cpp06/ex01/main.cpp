/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:56:02 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/09 13:29:33 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

int main()
{

    Data *ptr = new Data;
    uintptr_t iptr;

    ptr->a = 133456454;
    ptr->c = 'A';
    ptr->x = 13;
    ptr->y = 37;

    iptr = Serializer :: serialize(ptr);
    std :: cout << iptr << "\n";
   std :: cout << ptr << "\n";
    Data* AFTER = Serializer :: deserialize(iptr);
     std :: cout << AFTER << "\n";
    // std :: cout << AFTER->x  << AFTER->y <<"\n";
}