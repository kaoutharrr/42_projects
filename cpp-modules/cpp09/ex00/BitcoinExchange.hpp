/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:06:01 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/05 15:40:22 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include<iostream>
#include<fstream>
#include<map>
#include<string.h>
#include<cstdlib>


void check(std :: string str);
void fill_map(std :: map <std :: string, float > &data);
void compare(std :: string line, std :: map <std :: string, float > data);


#endif