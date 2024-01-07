/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:48 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/07 04:45:38 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"


int main(int ac , char **av)
{
    int i = 1;

    std :: vector<int> V;
    std :: deque<int> myList;
    std :: string buf;
    std :: clock_t start;
    std :: clock_t end;
    std :: clock_t v_start;
    std :: clock_t v_end;

    if(ac < 2)
        return 1;
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
                v_start = std :: clock();
                start = std :: clock();
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
        sort(myList, 0, myList.size());
        v_end = std :: clock();
        double res = (double) ((v_end - v_start) * CLOCKS_PER_SEC / 10000000);
        std::cout << "after:  ";
        aff(myList);
        std :: cout << std::fixed << std::setprecision(5) << "Time to process a range of " << myList.size() << " elements with std::deque : "<< res << " us." << std::endl;
        sort(V, 0, V.size());
        end = std :: clock();
        res = (double) ((end - start) * CLOCKS_PER_SEC / 10000000);
        std :: cout << std::fixed << std::setprecision(5) << "Time to process a range of " << V.size() << " elements with std::vector : "<< res << " us." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}