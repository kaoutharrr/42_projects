/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 04:23:25 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/13 22:38:24 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	while (nb < 1)
	{
		if (nb == 0)
			return (1);
		else
			return (0);
	}
	return (result);
}
/*
int main()
{
printf("%d",ft_iterative_factorial(7));
printf("\n");
printf("%d",ft_iterative_factorial(1));
printf("\n");
printf("%d",ft_iterative_factorial(-2));
printf("\n");
printf("%d",ft_iterative_factorial(0));
}
*/
