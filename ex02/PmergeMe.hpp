/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:01 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/07 01:56:19 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP


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

T insertionSort(T &v, int begin , int end)
{
    int i = begin;
     int j = i;

    while(i < end)
    {
        j = i;
        while(j > begin && v[j - 1] > v[j])
        {
            ft_swap(v[j] , v[j - 1]);
            j--;
        }
        i++;
    }
    return(v);
}
template<typename T>
T mergeSort(T v, int begin, int end)
{
    T a;
    T b;


    a = copyvec(v, begin, (end - begin)/2);
    b = copyvec(v, (end - begin)/2, end);
    unsigned int i = 0;
   unsigned int j = 0;
    T res;
    while(i < a.size() && j < b.size())
    {
        if(a[i] < b[j])
        {
            res.push_back(a[i]);
            i++;
        }
        else 
        {
            res.push_back(b[j]);
            j++;
        }

    }
    while(i < a.size())
    {
        res.push_back(a[i]);
        i++;
    }
    while(j < b.size())
    {
        res.push_back(b[j]);
        j++;
    }
    return(res);
}

template<typename T>
T sort(T &v, int begin, int end)
{
    T res;
    if(end - begin  < 10)
    {
        v = insertionSort(v, begin, end);
    }
    else
    {
        int m = (end - begin) / 2;
        v = sort(v,begin, m);
        v = sort(v, m , end);
        v  = mergeSort(v, begin, end);
    }
    return(v);
}



//std :: vector<int> mergeSort(std :: vector<int> a, std :: vector<int> b);
//std :: vector<int> sort(std :: vector<int> v, int begin, int end);



#endif