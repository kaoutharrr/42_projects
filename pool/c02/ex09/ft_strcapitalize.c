/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:36:30 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/04 01:29:17 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (! (str[i - 1] <= 'z' && str[i - 1] >= 'a')
			&& !(str[i - 1] <= 'Z' && str[i - 1] >= 'A')
			&& !(str[i - 1] <= '9' && str[i - 1] >= '0')
			&& !(str[i - 1] <= 'z' && str[i - 1] >= 'a')
			&& str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int main ()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));}*/
