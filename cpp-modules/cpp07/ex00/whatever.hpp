/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:18:03 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/09 14:30:06 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#define WHATEVER_HPP


template<typename T>

void swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T min(T a, T b)
{
    if(a < b)
        return(a);
    else
        return(b);
}

template<typename T>
T max(T a, T b)
{
    if(a > b)
        return(a);
    else
        return(b);
}

#endif