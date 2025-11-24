/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 04:56:12 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/13 22:41:21 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result *= nb * ft_recursive_factorial(nb - 1);
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(0));
	printf("\n");
	printf("%d", ft_recursive_factorial(11));
	printf("\n");
	printf("%d", ft_recursive_factorial(-3));
	printf("\n");
	printf("%d", ft_recursive_factorial(1));
}*/
