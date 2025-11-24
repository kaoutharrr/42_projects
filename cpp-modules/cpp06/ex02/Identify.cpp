/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 23:24:59 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/09 10:14:25 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Header.hpp"


Base * generate(void)
{
    int rand = std ::rand();
    int i = rand % 3;

    switch (i)
    {
        case 0 :
            return(new A());
        case 1 :
            return(new B());
        case 2 :
            return(new C());
            break;
        default:
            break;
    }

    return(NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std :: cout << "A\n";
    else if(dynamic_cast<B*>(p))
        std :: cout << "B\n";
    else if(dynamic_cast<C*>(p))
        std :: cout << "C\n";
    else
        std :: cout << "not a derived class :)\n";
}


void identify(Base& p)
{
    Base d;

    try
    {
        d = dynamic_cast<A&>(p);
    }
    catch(const std::bad_cast& e)
    {
        try
        {
            d = dynamic_cast<B&>(p);
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                d = dynamic_cast<C&>(p);
            }
            catch(const std::bad_cast e)
            {
                std :: cout << "not a derived class :)\n";
                return;
            }
            std :: cout << "C\n";
            return;
        }
        std :: cout << "B\n";
        return;
    }
        std :: cout << "A\n";
}

