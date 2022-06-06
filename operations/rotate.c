/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 18:19:57 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/02 11:21:03 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_list **a)
{
	t_list	*tmp;
	t_list	*begin;

	if (!*a || ft_lstsize(*a) == 1)
		return ;
	begin = (*a)->next;
	tmp = ft_lstlast(*a);
	tmp->next = *a;
	(*a)->next = NULL;
	*a = begin;
	ft_printf("ra\n");
}

void	rotate_b(t_list **b)
{
	t_list	*tmp;
	t_list	*begin;

	begin = (*b)->next;
	tmp = ft_lstlast(*b);
	tmp->next = *b;
	(*b)->next = NULL;
	ft_printf("rb\n");
	*b = begin;
}

void	rotate_rotate(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*begin;

	begin = (*a)->next;
	tmp = ft_lstlast(*a);
	tmp->next = *a;
	(*a)->next = NULL;
	*a = begin;
	begin = (*b)->next;
	tmp = ft_lstlast(*b);
	tmp->next = *b;
	(*b)->next = NULL;
	*b = begin;
	ft_printf("rr\n");
}
