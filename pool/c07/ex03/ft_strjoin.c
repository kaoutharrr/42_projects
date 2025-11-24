/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:11:42 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/15 16:21:43 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strslen(int size, char *strs[], char *sep)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		x += ft_strlen(strs[i]);
		x += ft_strlen(sep);
		i++;
	}
	x -= ft_strlen(sep);
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	char	*p1;
	char	*p2;

	if (size == 0)
		return ((char *) malloc(sizeof(char)));
	p1 = malloc((ft_strslen(size, strs, sep) + 1) * sizeof(char));
	p2 = p1;
	if (!p2)
		return (NULL);
	x = 0;
	while (x < size)
	{
		ft_strcpy(p2, strs[x]);
		p2 = p2 + ft_strlen(strs[x]);
		if (x < size - 1)
		{
			ft_strcpy(p2, sep);
			p2 = p2 + ft_strlen(sep);
		}
		x++;
	}
	*p2 = '\0';
	return (p1);
}
/*
int main ()
{
	char *str[] = {"1337", "is", "a dream", "to" , "me" };
	char *t;
	int i;
	t = ft_strjoin(5, str,"+");
		printf("%s", t);
}
*/
