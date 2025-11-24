/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:13:40 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/05 19:17:13 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include<cstdlib>
#include<iostream>
#include<stack>

int check_operators(char c);
void fillStack(char *s, std :: stack<int> &myStack);
int calculate(int a, int b, char c);

#endif