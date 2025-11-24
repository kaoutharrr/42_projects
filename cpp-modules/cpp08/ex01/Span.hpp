/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:15:11 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/01 20:49:35 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

class Span
{
    private :
        unsigned int _N;
        std :: vector<int> myVector;
    public :
        Span();
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void addRange(std :: vector<int> :: iterator begin, std :: vector<int> :: iterator end );
        ~Span(); 
};





#endif