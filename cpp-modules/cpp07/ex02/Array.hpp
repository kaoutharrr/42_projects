/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:57:15 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/11 22:05:57 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template<typename T>

class Array
{
    private:
        T * myArray;
        unsigned int  _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        T& operator[](unsigned int index);  
        unsigned int size()const ;
        ~Array();
};



#endif