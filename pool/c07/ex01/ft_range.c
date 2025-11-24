/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:20:04 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/14 17:30:08 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min ;
	tab = malloc(sizeof(int) * size);
	if (size <= 0)
	{
		return (0);
	}
	if (!tab)
	{
		return (0);
	}
	while (i < size)
	{
		tab [i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int	main ()
{
	int min;
	int i;
	int max;
	int *tab;
	min = 2;
	max = 8;

	i = 0;
	tab = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d",tab[i]);
		i++;
	}
}*/
