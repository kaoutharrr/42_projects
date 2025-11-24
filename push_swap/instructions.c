/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:38:16 by kkouaz            #+#    #+#             */
/*   Updated: 2023/03/03 22:14:59 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	ft_push(b, a);
	write(1, "pa\n", 3);
}

void	push_b(t_list **a, t_list **b)
{
	ft_push(a, b);
	write(1, "pb\n", 3);
}

void	rotate_a(t_list **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	reverse_a(t_list **a)
{
	ft_reverse(a);
	write(1, "rra\n", 4);
}
