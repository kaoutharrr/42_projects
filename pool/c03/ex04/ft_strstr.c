/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:22:26 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/06 00:52:35 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
			i++;
			j = 0;
	}
	return (0);
}
/*
int main ()
{
	char str[] = " it is so hard to live peacefully";
	char find[] = "live";
	char find2[] = "leave";
	char find3[] = "";
	printf("%s",ft_strstr(str,find));
	printf("\n%s",ft_strstr(str, find2));
	printf("\n%s",ft_strstr(str,find3));
}
*/
