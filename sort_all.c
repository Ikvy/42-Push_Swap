/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:07:56 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/02 16:02:22 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_sorting(t_list **a, t_list **b, int i)
{
	if (!((((*a)->content / ft_power(10, i)) % 10)))
		push_b(a, b);
	else
		rotate_a(a);
}

void	ft_connect(t_list **a, t_list **b)
{
	reverse_rotate_a(a);
	while (*b)
		push_a(a, b);
}

void	ft_radix(t_list **a, t_list **b)
{
	t_list	*begin;
	int		i;
	int		j;
	int		max;
	int		max_bits;

	i = 0;
	begin = *a;
	max = ft_lstsize(*a) - 1;
	max_bits = 1;
	while ((max >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < max + 2)
			ft_sorting(a, b, i);
		if (*b)
			ft_connect(a, b);
		i++;
	}
}
