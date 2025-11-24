/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:12:31 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/07 21:53:20 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main ()
{
	char str[] = "koko";
	char str1[] = "STAY";
	char STR[] = "";
	char sr[11] = "1234";
   	ft_putstr(str);
	ft_putstr(str1);
	ft_putstr(STR);
	ft_putstr(sr);

*/
}
