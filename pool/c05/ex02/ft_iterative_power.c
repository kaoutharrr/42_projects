/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:13:21 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/14 01:11:05 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (result);
}
/*int	main()
{
	printf("%d", ft_iterative_power(3, 1));
	printf("\n");
	printf("%d\n", ft_iterative_power(-4, 7));
	printf("%d\n", ft_iterative_power(0, -1));
}*/
