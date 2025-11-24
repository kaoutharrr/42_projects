/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:48 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/09 06:04:22 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"


int main(int ac , char **av)
{
    int i = 1;
    double res;
    std :: vector<int> V;
    std :: deque<int> myList;
    std :: string buf;
    double  d_start;
    double  d_end;
    double v_start;
    double   v_end;
    double d_s;
    double d_e;
    double v_s;
    double v_e;

    if(ac < 2)
    {
        std :: cout << "No arguments !\n";
        return 1;
    }
    try
    {
        check_digits(av);
        v_s = std :: clock();
        d_s = std :: clock();
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
        v_e = std ::clock();
        d_e = std :: clock();
        std :: cout << "Before:  ";
        aff(V);
        v_start = std ::clock();
        sort(V, 0, V.size());
        v_end = std :: clock();
        res = static_cast<double>(((v_end - v_start) + (v_e - v_s) )/CLOCKS_PER_SEC) / 1000000;
        std::cout << "after:  ";
        aff(V);
        std :: cout << std::fixed << std::setprecision(15) << "Time to process a range of " << V.size() << " elements with std::vector : "<< res << " us." << std::endl;
        d_start = std :: clock();
        sort(myList, 0, myList.size());
        d_end = std :: clock();
        res = static_cast<double>(((d_end - d_start) + (d_e - d_s)) / CLOCKS_PER_SEC) / 1000000;
        std :: cout  << "Time to process a range of " << myList.size() << " elements with std:: deque : "<< res << " us." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}