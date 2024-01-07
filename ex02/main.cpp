/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:48 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/07 03:27:29 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"


int main(int ac , char **av)
{
    int i = 1;

    std :: vector<int> V;
    std :: deque<int> myList;
    std :: string buf;

    try
    {
        check_digits(av);
        while(i < ac)
        {
            unsigned int j = 0;
            std::string sp = av[i];
            while(j < sp.length())
            {
                while(isdigit(sp[j]))
                {
                    buf+=(sp[j]); 
                    j++;
                
                }
                if(!buf.empty())
                {
                    V.push_back(std :: atoi(buf.c_str()));
                    myList.push_back(std :: atoi(buf.c_str()));
                    buf.clear();
                }
                j++;
            }
            i++;
        }
        std :: cout << "Before:  ";
        aff(myList);
        clock_t start =std :: clock();
        myList = sort(myList, 0, myList.size());
        clock_t end = std :: clock() ;
        // double duration = static_cast<double>(((end - start) *  CLOCKS_PER_SEC)/10000000);
         double duration = static_cast<double>((end - start) * 1e6) / CLOCKS_PER_SEC;
        std :: cout  << std::fixed << std::setprecision(5)<< static_cast<double>(duration) << "\n";
        std :: cout << "After:   ";
        aff(myList);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}