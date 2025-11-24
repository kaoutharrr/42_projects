/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:09:22 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/14 01:12:21 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		result = 1;
	}
	if (power > 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

/*int main()
{
	printf("%d\n",ft_recursive_power(6, 4));
	printf("%d\n",ft_recursive_power(0, 0));
	printf("%d\n",ft_recursive_power(-2, 5));
	printf("%d\n",ft_recursive_power(2, -2));
}*/
