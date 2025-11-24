/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:50:05 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/04 03:51:57 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	printf("%d",ft_str_is_uppercase("Koko0"));
	printf("%d",ft_str_is_uppercase("KIWI"));
	printf("%d",ft_str_is_uppercase("AZ"));
}*/
