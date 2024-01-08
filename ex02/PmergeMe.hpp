/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:01 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/08 00:42:58 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <unistd.h>
#include<iostream>
#include<vector>
#include<list>
#include<exception>
#include<cstdlib>
#include<deque>
#include<ctime>
#include<iomanip>

void    check_digits(char **av);
void ft_swap(int& a, int &b);

template<typename T>
void aff(T V){
       for (unsigned int i = 0; i < V.size(); ++i) {
        std::cout << V[i] << " ";
    } 
    std::cout << std::endl;
}

template<typename T>
T copyvec(T v, int begin, int end)
{
    T copy;
    while(begin < end)
    {
        copy.push_back(v[begin]);
        begin++;
    }
    return(copy);
}
template<typename T>

void insertionSort(T& v, unsigned int begin , unsigned int end)
{
    unsigned int i = begin;
     unsigned int j = i;

    while(i < end && i < v.size())
    {
        j = i;
        while(j > begin && v[j - 1] > v[j])
        {
            ft_swap(v[j] , v[j - 1]);
            j--;
        }
        i++;
    }
}

template<typename T>
void mergeSort(T &v, int begin, int end)
{
    T a;
    T b;

    a = copyvec(v, begin, (end + begin)/2);
    b = copyvec(v, (end + begin)/2, end);
    unsigned int i = 0;
    unsigned int j = 0;
    T res;
    while(i < a.size() && j < b.size())
    {
        if(a[i] < b[j])
        {
            v[begin] = a[i];
            i++;
        }
        else 
        {
            v[begin] = b[j];
            j++;
        }
        begin++;
    }
    while(i < a.size())
    {
        v[begin++] = a[i++];
    }
    while(j < b.size())
    {
        v[begin++] = b[j++];
    }
}

template<typename T>
void sort(T& v, int begin, int end)
{
   T res;
    if(end - begin  <= 10)
    {
        insertionSort(v, begin, end);
    }
    else
    {
        int m = (end + begin) / 2;
        sort(v,begin, m);
        sort(v,m, end);
        mergeSort(v, begin, end);
    }
}

#endif