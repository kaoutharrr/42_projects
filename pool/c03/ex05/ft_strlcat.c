/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:16:26 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/06 23:34:22 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen( char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	unsigned int	y;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	x = 0;
	y = i;
	if (size > 0 && size > i)
	{
		while (src[x] && x < size - i - 1)
		{
			dest[y] = src [x];
			x++;
			y++;
		}
		dest[y] = '\0';
		return (i + j);
	}
	return (j + size);
}
/*
int main ()
{
	char dest[7] = "call";
	char src[] = " me";
	char src1[] = "callme";
	char src3[] = "";
	printf("%d,%s",ft_strlcat(dest, src, 2),dest);
	printf("%d,%s",ft_strlcat(dest,src3,7),dest);
	printf("%d,%s",ft_strlcat(dest,src1,0),dest);
}*/
