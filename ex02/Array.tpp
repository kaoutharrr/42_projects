/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:06:40 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/11 22:06:03 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"

template <typename T>

Array<T>:: Array() :myArray(NULL) , _size(0)
{
}

template <typename T>
Array<T>:: Array(unsigned int n) : _size(n)
{
    myArray = new T[_size];

    for (unsigned int i = 0; i < _size;i++) 
    {
        myArray[i] = T();
    }
}
template <typename T>
Array<T>:: Array(const Array& other)
{
    _size = other._size;
    myArray = new  T[_size];
    for (unsigned int i = 0; i < _size ;i++)
    {
        myArray[i] = other.myArray[i];
    }
}

template <typename T>

Array<T> & Array<T>:: operator=(const Array& other)
{
    if(this != &other)
    {
        _size = other._size;
        if(myArray != NULL)
            delete[] myArray;
        myArray = new  T[_size];
        for (unsigned int i = 0; i < _size ;i++)
        {
            myArray[i] = other.myArray[i];
        }
    }
    return(*this);
}
template <typename T>

T& Array<T>:: operator[](unsigned int index)
{
    if(index >= _size)
        throw(std::out_of_range("index out of range!"));
    return (myArray[index]);
}

template <typename T>
unsigned int Array<T> :: size()const
{
    return(_size);
}

template <typename T>
Array<T>:: ~Array()
{
    if(myArray)
        delete[] myArray;
}