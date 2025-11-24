/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:06:21 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/04 03:45:03 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] <= 'Z' && str[i] >= 'A')
			|| (str[i] <= 'z' && str[i] >= 'a'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	printf("%d", ft_str_is_alpha("qbCde1233gO"));
	printf("%d", ft_str_is_alpha("deg"));
	printf("%d", ft_str_is_alpha(""));
}
*/
