/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 10:55:38 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/04 10:12:54 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_base(int nbr)
{
	char	res[30];
	int		i;

	i = 0;
	while (nbr > 0)
	{
		res[i] = nbr % 2 + 48;
		nbr = nbr / 2;
		i++;
	}
	res[i] = 0;
	ft_rev(res);
	return (ft_atoi(res));
}

void	ft_convert_to_binary(t_list	**a)
{
	t_list	*begin;

	begin = *a;
	while (*a)
	{
		(*a)->content = ft_base((*a)->content);
		*a = (*a)->next;
	}
	*a = begin;
}
