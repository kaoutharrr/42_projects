/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:43:59 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/04 18:48:39 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_HPP
#define FILES_HPP

#include<string.h>
#include"BitcoinExchange.hpp"


void check(std :: string str);
void fill_map(std :: map <std :: string, float > &data);
void compare(std :: string line, std :: map <std :: string, float > data);

#endif