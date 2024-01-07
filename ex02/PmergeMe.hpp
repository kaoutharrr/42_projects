/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:01 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/07 01:03:17 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP


#include<iostream>
#include<vector>
#include<list>
#include<exception>
#include<cstdlib>
std :: vector<int> copyvec(std :: vector<int> v, int begin, int end);
void aff(std::vector<int> V);
std :: vector<int>& insertionSort(std :: vector<int> &v, int begin , int end);
void    check_digits(char **av);
void ft_swap(int& a, int &b);
std :: vector<int> mergeSort(std :: vector<int> a, std :: vector<int> b);
std :: vector<int> sort(std :: vector<int> v, int begin, int end);
#endif