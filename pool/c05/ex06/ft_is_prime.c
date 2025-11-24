/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:05:28 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/13 22:53:56 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int main ()
{
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(-7));
	printf("%d\n", ft_is_prime(0));
}*/
