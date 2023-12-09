/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:35:03 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/09 15:03:44 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>
template <typename T>
void increment(T& a)
{
    a++;
}

template <typename T>
void print(T& a)
{
    std :: cout << a << std :: endl;
}

template <typename T>

void iter(T* arr, size_t len, void( *Func)(T &))
{
    if(arr == NULL || Func == NULL)
        return;
    for(size_t i = 0; i < len ; i++)
    {
        Func(arr[i]);
    }
    
}

//const 


template <typename T>
void print(const T& a)
{
    std :: cout << a << std :: endl;
}

template <typename T>

void iter(const T* arr, size_t len, void( *Func)(const T &))
{
    if(arr == NULL || Func == NULL)
        return;
    for(size_t i = 0; i < len ; i++)
    {
        Func(arr[i]);
    }
    
}
#endif