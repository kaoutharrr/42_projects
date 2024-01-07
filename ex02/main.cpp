/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:48 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/07 00:48:26 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"


// int main(int ac , char **av)
// {
//     if(ac != 2)
//     {
//         std :: cerr << "invalid argumemts !!\n";
//         return(1);
//     }
//     std :: vector<int> V;
//     std :: list <int> myList;
   
//     std :: string s;
//     s = av[1];
//    std :: string buf;
//     try
//     {
//         unsigned int i = 0;
//         int j = 0;
//         while (i  < s.length())
//         { 
//             if( !isdigit(s[i]) && s[i] != ' ' )
//             {
//                 throw(std :: runtime_error("Error"));
//             }
//             i++;
//         }
//         i = 0;
//         while(i < s.length())
//         {
//             while(isdigit(s[i]))
//             {
               
//                 buf+=(s[i]); 
//                 i++;
//                 j++; 
               
//             }
//             if(!buf.empty() && j)
//             {
//                 V.push_back(std :: atoi(buf.c_str()));
//                 myList.push_back(std :: atoi(buf.c_str()));
//                 buf.clear();
//             }
//             j = 0;
//             i++;
//         } 
//       V = sort(V, *V.begin(), *V.end());
//     //       std::cout << "Elements of the vector: ";
//     // for (unsigned int i = 0; i < V.size(); ++i) {
//     //     std::cout << V[i] << " ";
//     //} 
//     }
    
//     catch(std :: exception& e)
//     {
//         std :: cerr << e.what() << std :: endl;
//     }
// }

int main(int ac , char **av)
{
    int i = 1;
    // int j = 0;

    std :: vector<int> V;
    std :: list<int> myList;
    std :: string buf;

    // if(ac < 2)
    //     return 1;
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

        V = sort(V, 0, V.size());
          std::cout << "Elements of the vector: ";
    for (unsigned int i = 0; i < V.size(); ++i) {
        std::cout << V[i] << " ";
    } 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}