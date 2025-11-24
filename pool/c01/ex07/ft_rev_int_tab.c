/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:59:28 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/01 17:32:16 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}
/*
int main ()
{
	int t[]={4,5,7,9,8,6};
	int i;
	i = 0;
	ft_rev_int_tab(t,6);
	while(i<6)
	{
		printf("%d",t[i]);
			i++;
	}
}
*/	
