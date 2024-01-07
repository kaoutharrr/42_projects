/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:29:53 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/06 15:20:46 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

int check_operators(char c)
{
    if( c == '+' || c == '-' || c == '/' || c == '*')
        return(0);
    return(1);
}


int calculate(int a, int b, char c)
{
    if(c == '+')
        return(a+b);
    if(c == '-')
        return(a-b);
    if(c == '/')
    {
        if(b == 0)
            throw(std :: runtime_error("Er--ror"));
        return(a/b);
    }
    if(c == '*')
        return(a*b);
    return(0);
    
}
void fillStack(char *k, std :: stack<int> &myStack)
{
    unsigned int i = 0;
    int a, b, res;
    std::string s = k;
    while(i < s.length() - 1)
    {
        while(check_operators(s[i]))
        {
            if(isdigit(s[i]))
            {
                myStack.push(std :: atoi(&s[i]));
            }
             i++;
        }
   
        if(!check_operators(s[i]))
        {
            if(myStack.size() >= 2)
            {
                a = myStack.top();
                myStack.pop();
                b = myStack.top();
                myStack.pop();
                std::cout << "a = " << b << " " << s[i] <<" b = " << a << std::endl;
                res = calculate(b, a , s[i]);
                myStack.push(res);
            }   
            else
                throw(std :: runtime_error("Error"));
        }
        i++;
    }
    if(myStack.size() != 1)
        throw(std :: runtime_error("Error"));
    else
        std :: cout << myStack.top();
}
