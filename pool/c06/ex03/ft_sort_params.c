/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:08:23 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/12 01:43:02 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print(int ac, char **av)
{
	int	l;

	l = 1;
	while (l < ac)
	{
		ft_putstr(av[l]);
		write(1, "\n", 1);
		l++;
	}
}

int	main(int ac, char **av)
{
	int		x;
	int		y;
	char	*swap;

	x = 1;
	if (ac > 1)
	{
		while (x < ac - 1)
		{
			y = x + 1;
			while (y < ac)
			{
				if (ft_strcmp(av[x], av[y]) > 0)
				{
					swap = av[x];
					av[x] = av[y];
					av[y] = swap;
				}
				y++;
			}
			x++;
		}
		ft_print(ac, av);
	}
}
