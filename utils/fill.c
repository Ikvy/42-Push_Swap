/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 07:50:45 by mmidon            #+#    #+#             */
/*   Updated: 2022/06/04 09:28:36 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_order(t_list	**a)
{
	t_list	*begin;

	begin = *a;
	while (*a)
	{
		(*a)->content = (*a)->index;
		*a = (*a)->next;
	}
	*a = begin;
}

t_list	*ft_list(char **tmp, int size)
{
	int		*stack_a;
	size_t	i;

	i = 0;
	stack_a = malloc(sizeof (int) * size);
	if (!stack_a)
		return (NULL);
	while (tmp[i] && size-- + 1)
	{
		stack_a[i] = ft_atoi(tmp[i]);
		free(tmp[i]);
		i++;
	}
	free(tmp);
	ft_is_repeating(stack_a, i);
	return (ft_stack(stack_a, i));
}

t_list	*ft_send(char *str, int len)
{
	char	**tmp;

	tmp = ft_split(str, ' ');
	return (ft_list(tmp, len));
}

void	ft_cpy_stock(char **tmp, char **stock, size_t *i, size_t *j)
{
	tmp[*j] = ft_strdup(stock[*i]);
	free(stock[*i]);
	(*i)++;
	(*j)++;
}

t_list	*ft_send_more(char **av, int len, int ac)
{
	char	**tmp;
	size_t	i;
	char	**stock;
	size_t	x;
	size_t	j;

	x = 0;
	j = 0;
	tmp = malloc(sizeof(char *) * (len + 1));
	if (!tmp)
		return (NULL);
	while (ac-- - 1)
	{
		i = 0;
		stock = ft_split(av[++x], ' ');
		while (stock[i])
			ft_cpy_stock(tmp, stock, &i, &j);
		free(stock);
	}
	tmp[j] = NULL;
	return (ft_list(tmp, len));
}
