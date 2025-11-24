/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 23:23:30 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/08 14:31:57 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
			i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] <= '9' && str[i] >= '0'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
/*
int main ()
{
	char str[] = " ---+--+1234ab567";
	printf("%d",ft_atoi(str));
}
*/
