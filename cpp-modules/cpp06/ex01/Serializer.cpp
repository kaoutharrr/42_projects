/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:05:25 by kkouaz            #+#    #+#             */
/*   Updated: 2023/12/06 00:05:01 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"




uintptr_t Serializer ::  serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}


Data*  Serializer :: deserialize(uintptr_t raw)
{ 
    return(reinterpret_cast<Data*>(raw));
}

