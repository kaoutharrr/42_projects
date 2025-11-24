/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:54:39 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/01 21:31:18 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"
#include<list>

// int main()
// {

//    std :: list<int> mstack;
//     mstack.push_front(5);
//     mstack.push_front(17);
//     std::cout << *(mstack.begin()) << std::endl;
//     mstack.pop_front();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737); 
//     // std :: list<int>::iterator it = mstack.begin();
//     // std :: list<int>::iterator ite = mstack.end();
//     std :: list<int>::const_iterator it = mstack.begin();
//      std :: list<int>::const_iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }

//     return 0;
// } 

int main()
{
   MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    // MutantStack<int>::const_iterator it = mstack.begin();
    // MutantStack<int>::const_iterator ite = mstack.end();
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
} 