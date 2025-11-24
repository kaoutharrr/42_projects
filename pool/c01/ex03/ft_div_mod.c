/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 03:45:46 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/01 13:54:34 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a;
	int b;
	int div ;
	int mod;
	a = 6 ;
	b = 4 ;
	ft_div_mod(a, b, &div , &mod);
	printf("div = %d",div);
	printf("\n mod = %d",mod);
}
*/
