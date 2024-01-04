/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:43:59 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/04 16:16:36 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_HPP
#define FILES_HPP

#include<string.h>
#include"BitcoinExchange.hpp"


void check(std :: string str);
void fill_map(BitcoinExchange& data);
void compare(std :: string line, BitcoinExchange& data);

#endif