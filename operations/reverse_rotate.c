/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:26:56 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/02 10:31:43 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*ptr;

	if (!*a || ft_lstsize(*a) == 1)
		return ;
	ptr = *a;
	while ((*a)->next != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
	}
	ft_lstlast(*a)->next = ptr;
	tmp->next = NULL;
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*ptr;

	ptr = *b;
	while ((*b)->next != NULL)
	{
		tmp = *b;
		*b = (*b)->next;
	}
	ft_lstlast(*b)->next = ptr;
	tmp->next = NULL;
	ft_printf("rrb\n");
}

void	reverse_rotate_rotate(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*ptr;

	ptr = *a;
	while ((*a)->next != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
	}
	ft_lstlast(*a)->next = ptr;
	tmp->next = NULL;
	ptr = *b;
	while ((*b)->next != NULL)
	{
		tmp = *b;
		*b = (*b)->next;
	}
	ft_lstlast(*b)->next = ptr;
	tmp->next = NULL;
	ft_printf("rrr\n");
}
