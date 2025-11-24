/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:00:18 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/07 21:09:42 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	char str[] = "believe";
	char str2[] = "try hard";
	char str3[] = "";
	printf("%d", ft_strlen(str));
	printf("\n%d", ft_strlen(str2));
	printf("\n%d", ft_strlen(str3));
}
*/
