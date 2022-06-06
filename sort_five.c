/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:52:33 by mmidon            #+#    #+#             */
/*   Updated: 2022/05/22 12:32:23 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_find_min(t_list *a)
{
	int	min;
	int	vald;

	vald = a->content;
	min = a->index;
	while (a->next)
	{
		a = a->next;
		if ((a->content) < vald)
		{
			vald = a->content;
			min = a->index;
		}
	}
	return (min);
}

void	ft_sort_five(t_list **a, t_list **b)
{
	int		min;

	min = ft_find_min(*a);
	if (min <= 2)
	{
		while ((*a)->index != min)
			rotate_a(a);
		push_b(a, b);
	}
	else if (min > 2)
	{
		while ((*a)->index != min)
			reverse_rotate_a(a);
		push_b(a, b);
	}
	if (ft_lstsize(*a) == 4)
		ft_sort_five(a, b);
	ft_sort_three(a);
	push_a(a, b);
	ft_index(a);
}
