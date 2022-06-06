/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:55:29 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/02 13:37:08 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_get_max(t_list *a)
{
	int	max;

	max = a->content;
	while (a->next)
	{
		a = a->next;
		if (a->content > max)
			max = a->content;
	}
	return (max);
}

int	ft_get_next_min(t_list *a, int order, int max)
{
	int	min;

	min = max;
	while (a)
	{
		if (a->content < min && a->content > order)
			min = a->content;
		a = a->next;
	}
	return (min);
}

int	ft_get_min(t_list *a)
{
	int	min;

	min = a->content;
	while (a->next)
	{
		a = a->next;
		if (a->content < min)
			min = a->content;
	}
	return (min);
}

void	ft_index(t_list	**a)
{
	t_list	*begin;
	int		min;
	int		order;
	int		max;

	begin = *a;
	max = ft_get_max(*a);
	min = ft_get_min(*a);
	order = 0;
	while (*a && order != ft_lstsize(begin))
	{
		if ((*a)->content == min)
		{
			(*a)->index = order;
			min = ft_get_next_min(begin, min, max);
			order++;
			*a = begin;
		}
		else
			*a = (*a)->next;
	}
	*a = begin;
}

t_list	*ft_stack(int *res, size_t tab_size)
{
	int		i;
	int		size;
	t_list	*begin;
	t_list	*a;

	a = ft_lstnew(res[0]);
	begin = a;
	i = 1;
	size = tab_size;
	while (size-- - 1)
	{
		a->next = ft_lstnew(res[i]);
		a = a->next;
		i++;
	}
	a = begin;
	free (res);
	return (a);
}
