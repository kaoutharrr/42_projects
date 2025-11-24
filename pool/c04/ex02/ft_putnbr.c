/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:54:26 by kkouaz            #+#    #+#             */
/*   Updated: 2022/09/07 23:22:49 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
	else
	{
		ft_putchar(nbr + 48);
	}
}
/*
int main ()
{
	ft_putnbr(114253);
	ft_putnbr(-755);
}*/
