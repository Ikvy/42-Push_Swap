/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:43:36 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/03 11:15:16 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	t_list	*ptr;

	if (!*b)
		return ;
	ptr = *b;
	*b = ptr->next;
	if (*a)
		ptr->next = *a;
	else
		ptr->next = NULL;
	*a = ptr;
	ft_printf("pa\n");
}

void	push_b(t_list **a, t_list **b)
{
	t_list	*ptr;

	if (!*a)
		return ;
	ptr = *a;
	*a = ptr->next;
	if (*b)
		ptr->next = *b;
	else
		ptr->next = NULL;
	*b = ptr;
	ft_printf("pb\n");
}
