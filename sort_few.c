/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:09:17 by mmidon            #+#    #+#             */
/*   Updated: 2022/05/22 12:23:50 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_is_sorted(t_list	*a)
{
	int	tmp;

	while (a->next)
	{
		tmp = a->content;
		a = a->next;
		if (tmp > a->content)
			return (0);
	}
	return (1);
}

static void	ft_norminette(t_list **a, t_list *ptr)
{
	*a = ptr;
	rotate_a(a);
	swap_a(a);
	reverse_rotate_a(a);
}

void	ft_sort_three(t_list **a)
{
	t_list	*ptr;

	ptr = *a;
	if ((*a)->next->content < (*a)->content
		&& (*a)->next->content < (*a)->next->next->content
		&& (*a)->content < (*a)->next->next->content)
		swap_a(a);
	else if ((*a)->next->content < (*a)->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		*a = ptr;
		swap_a(a);
		reverse_rotate_a(a);
	}
	else if ((*a)->next->content > (*a)->next->next->content
		&& (*a)->content > (*a)->next->next->content)
		reverse_rotate_a(a);
	else if ((*a)->next->content > (*a)->next->next->content
		&& (*a)->content < (*a)->next->next->content)
		ft_norminette(a, ptr);
	else if ((*a)->content > (*a)->next->next->content
		&& (*a)->next->next->content > (*a)->next->content)
		rotate_a(a);
}

void	ft_sort_few(t_list **a)
{
	if (ft_lstsize(*a) == 1)
		return ;
	if (ft_lstsize(*a) == 2)
		if ((*a)->content > (*a)->next->content)
			rotate_a(a);
	if (ft_lstsize(*a) == 3)
		ft_sort_three(a);
}
