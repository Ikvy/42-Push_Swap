/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:08:11 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/02 13:36:54 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	show_stack(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack)
			printf("%ld | ", stack->content);
		else
		{
			printf("(null)\n");
		}
		stack = stack->next;
		i ++;
	}
	printf("\n");
	return (i);
}

/*///////////zouiiiiiiiiiii/////////////////
void	ft_display(t_list *a, t_list *b)
{
	if (!a || !b)
		return ;
	ft_printf("\n\n\n");
	while (a || b)
	{
		if (a)
		{
			ft_printf("%d	|	", a->content);
			a = a->next;
		}
		if (b)
		{
			if (!a)
				ft_printf("\n	|	%d\n", b->content);
			if (a)
				ft_printf("%d\n", b->content);
			b = b->next;
		}
	}
	ft_printf("\na	 	b\n\n\n");
}*/
