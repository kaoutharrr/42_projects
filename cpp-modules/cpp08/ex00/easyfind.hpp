/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:19:49 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/01 20:46:40 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<algorithm>
#include<iostream>

template<typename T>

typename T :: iterator easyfind(T& myContainer, int a)
{
    typename T :: iterator iter;
    iter = std :: find(myContainer.begin(), myContainer.end(), a);
    if(iter == myContainer.end())
        throw(std :: runtime_error("value not found"));
    return(iter);
}










#endif