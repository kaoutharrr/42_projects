/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:54:41 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/04 03:39:12 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char cr)
{
	if (cr >= 32 && cr <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
    char *hex;

	i = 0;
    hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (ft_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{	
			ft_putchar('\\');
			ft_putchar(hex[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}
/*
int main ()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putchar('\n');
	ft_putstr_non_printable(" ");
}
*/
