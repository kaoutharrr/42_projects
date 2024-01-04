/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:18:23 by kkouaz            #+#    #+#             */
/*   Updated: 2024/01/04 15:48:07 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

BitcoinExchange :: BitcoinExchange()
{
}

BitcoinExchange :: BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

BitcoinExchange& BitcoinExchange :: operator=(const BitcoinExchange& other)
{
    if(this != &other)
    {
        this->data = other.data;
    }
    return(*this);
}

void BitcoinExchange :: addElements(std :: string date, float value)
{
    data.insert(std::make_pair(date, value));
}

BitcoinExchange :: ~BitcoinExchange()
{

}
