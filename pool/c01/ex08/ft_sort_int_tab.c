/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:07:12 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/01 17:33:04 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}
/*
int main ()
{
	int t[]={8,5,4,3,2,1};
	int i ;
	i = 0;
	ft_sort_int_tab(t,6);
	while (i<6)
	{
		printf("%d",t[i]);
		i++;
	}
}
*/
