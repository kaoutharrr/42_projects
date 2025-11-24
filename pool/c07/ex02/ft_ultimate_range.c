/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:36:24 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/15 17:19:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*t;
	int	size;

	i = 0;
	size = max - min;
	if (max <= min)
	{
		t = NULL;
		return (0);
	}
	t = malloc(sizeof(int) * size);
	if (!t)
	{
		return (-1);
	}
	while (i < size)
	{
		t[i] = min ;
		i++;
		min++;
	}
	*range = t;
	return (size);
}
/*
int main (){
int *range;
	printf("%d",ft_ultimate_range(&range, 3, 9));
}
*/
