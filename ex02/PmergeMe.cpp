/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:24:41 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/07 01:00:37 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

void    check_digits(char **av)
{
    int i = 1;
    int j = 0;
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            if( !isdigit(av[i][j]) && av[i][j] != ' ' )
                throw(std :: runtime_error("Error"));
            j++;
        }
        i++;
    }
}

void ft_swap(int& a, int& b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
std :: vector<int>& insertionSort(std :: vector<int> &v, int begin , int end)
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

std :: vector<int> copyvec(std :: vector<int> v, int begin, int end)
{
    std :: vector<int>copy;
    while(begin < end)
    {
        copy.push_back(v[begin]);
        begin++;
    }
    return(copy);
}
std :: vector<int> mergeSort(std :: vector<int> v, int begin, int end)
{
    std :: vector<int>a;
    std :: vector<int>b;


    a = copyvec(v, begin, (end - begin)/2);
    b = copyvec(v, (end - begin)/2, end);
       unsigned int i = 0;
   unsigned int j = 0;
    std :: vector<int> res;
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
    std :: cout << "================a============\n";
    aff(a);
    std :: cout << "================.b============\n";
    aff(b);
    std :: cout << "================res============\n";
    aff(res);
    return(res);
}
void aff(std::vector<int> V){
       for (unsigned int i = 0; i < V.size(); ++i) {
        std::cout << V[i] << " ";
    } 
    std::cout << std::endl;
}

std :: vector<int> sort(std :: vector<int> v, int begin, int end)
{
    std :: vector<int> res;
    if(end - begin  < 10){
        std::cout << "before insert\n";
        aff(v);
        v = insertionSort(v, begin, end);
        std::cout << "after\n" ;
        aff(v);
        std::cout << std::endl;
    }
    else
    {
        int m = (end - begin) / 2;
        v = sort(v,begin, m);
         v = sort(v, m , end);
         std :: cout << "begin = " << begin << " end = " << end << "\n";
       v =  mergeSort(v, begin, end);
    }
    return(v);
}